<?php

if(isset($_POST['resetPasswordSubmit'])) {


    $selector = $_POST["selector"];
    $validator = $_POST["validator"];
    $password = $_POST["password"];
    $repeatPassword = $_POST["repeatPassword"];


    if($password != $repeatPassword) {
        header("Location: ../createNewPassword.php?password=notsame");
        exit();
    } 


    $currentDate = date("U");

    require 'dbh.inc.php';


    $sql = "SELECT * FROM pwdReset WHERE pwdResetSelector = ? AND pwdResetExpires >= ?";
    $stmt = mysqli_stmt_init($conn);
    if(!mysqli_stmt_prepare($stmt, $sql)) { 
        echo "there was an error selecting";
        exit();
    } else {
        mysqli_stmt_bind_param($stmt, "ss", $selector, $currentDate);
        mysqli_stmt_execute($stmt);

        $result = mysqli_stmt_get_result($stmt);
        if(!$row = mysqli_fetch_assoc($result)) { 
           
            header("Location: ../createNewPassword.php?reset=alreadyReset");
            exit();
        } else {

            $tokenBin = hex2bin($validator);
            $tokenCheck = password_verify($tokenBin, $row["pwdResetToken"]);
            if($tokenCheck === false) {
                echo " token didn't mathched!"; 
                exit();
            } elseif($tokenCheck === true) {
                $tokenEmail = $row['pwdResetEmail'];
                $sql = "SELECT * FROM organizers WHERE organizer_email=?;";
                $stmt = mysqli_stmt_init($conn);
                if(!mysqli_stmt_prepare($stmt, $sql)) { 
                    echo "there was an error selecting";
                    exit();
                } else {
                    mysqli_stmt_bind_param($stmt, "s", $tokenEmail);
                    mysqli_stmt_execute($stmt);
                    $result = mysqli_stmt_get_result($stmt);
                    if(!$row = mysqli_fetch_assoc($result)) { 
                        echo "There was an error"; 
                        exit();
                    } else {

                        $sql = "UPDATE organizers SET organizer_password=? WHERE organizer_email=?;"; 
                        $stmt = mysqli_stmt_init($conn);
                        if(!mysqli_stmt_prepare($stmt, $sql)) { 
                            echo "there was an error selecting";
                            exit();
                        } else {

                            $newHasedPassword = password_hash($password, PASSWORD_DEFAULT);
                            mysqli_stmt_bind_param($stmt, "ss", $newHasedPassword, $tokenEmail);
                            mysqli_stmt_execute($stmt);


                            $sql = "DELETE From pwdReset WHERE pwdResetEmail=?";
                            $stmt = mysqli_stmt_init($conn);
                            if(!mysqli_stmt_prepare($stmt, $sql)) { 
                                echo "there was an error deleting";
                                exit();
                            } else {
                                mysqli_stmt_bind_param($stmt, "s", $tokenEmail);
                                mysqli_stmt_execute($stmt);
                                
                                header("Location: ../login.php?newpassword=passwordupdated"); 
                            }
                        }
                   }
                }
            }
        }
    }

} else {
    header("Location: ../index.php");
}