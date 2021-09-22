<?php

if(!isset($_POST['submit'])) { 
    header("Location: ../signup.php");
    exit();
} else {
    include_once 'dbh.inc.php'; 

    $fullname = mysqli_real_escape_string($conn, $_POST['fullname']);
    $username = mysqli_real_escape_string($conn, $_POST['username']);
    $email = mysqli_real_escape_string($conn, $_POST['email']);
    $password = mysqli_real_escape_string($conn, $_POST['password']);
    $phone = mysqli_real_escape_string($conn, $_POST['phone']);

  
    $vkey = md5(time().$username); 


    if(!preg_match("/^[a-zA-Z'. -]+$/", $fullname)) {    
        header("Location: ../signup.php?signup=invalidname");
        exit();
    } else {
    
        $sql = "SELECT * FROM organizers WHERE organizer_username = '$username'";
        $result = mysqli_query($conn, $sql);
        $resultCheck = mysqli_num_rows($result);
        if($resultCheck > 0) {
            header("Location: ../signup.php?signup=usernametaken");
            exit();
        } else {
            
            $hashedPassword = password_hash($password, PASSWORD_DEFAULT);
           
            $sql = "INSERT INTO organizers(organizer_fullname, organizer_username, organizer_email, organizer_password, organizer_phone, vkey) VALUES('$fullname','$username','$email','$hashedPassword','$phone','$vkey');";
            $insertSuccess = mysqli_query($conn, $sql);
           

            if($insertSuccess) {
           
                $url = "http://localhost:8080/Fundvoice/includes/verifyEmail.inc.php?vkey=".$vkey;
                $to = $email;
                $subject = 'Email Verification';
                $message = '<p>You can verify the email from the link below:</br>';
                $message .= '<a href="' .$url. '">Verify Email</a></p>';

                $headers = "From: Fund Raiser <abu35-2379@diu.edu.bd>\r\n";
                $headers .= "Reply-To: abu35-2379@diu.edu.bd\r\n";
                $headers .= "Content-type: text/html\r\n"; 

                mail($to, $subject, $message, $headers);

                header("Location: ../assets/html/thankyouemail.html");
                exit();
            } else {
                echo $conn->error;
            }        
        }
    }

}