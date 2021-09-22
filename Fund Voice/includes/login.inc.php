<?php

session_start();

if(isset($_POST['submit'])) { 
    include 'dbh.inc.php';

    $username = mysqli_real_escape_string($conn, $_POST['username']);
    $password = mysqli_real_escape_string($conn, $_POST['password']);

    
    $sql = "SELECT * FROM organizers WHERE organizer_username='$username' OR organizer_email='$username';";
    $result = mysqli_query($conn,$sql);
    $resultCheck = mysqli_num_rows($result);

    if($resultCheck < 1) { 
        header("Location: ../login.php?login=notauthenticuser");
        exit();
    } else {
      
        if($row = mysqli_fetch_assoc($result)) {
           
            $hashedPasswordCheck = password_verify($password, $row['organizer_password']);
            if($hashedPasswordCheck == false) {
                header("Location: ../login.php?login=invalidPassword");
                exit();
            } elseif($hashedPasswordCheck == true) {
              
                $_SESSION['o_id'] = $row['organizer_id'];
                $_SESSION['o_fullname'] = $row['organizer_fullname'];
                $_SESSION['o_username'] = $row['organizer_username'];
                $_SESSION['o_email'] = $row['organizer_email'];
                $_SESSION['o_phone'] = $row['organizer_phone'];

                $date = $row['organizer_reg_date'];
                $date = strtotime($date);
                $date = date('M D Y',$date); 

                $_SESSION['o_date'] = $date;
                 
                $verified = $row['verified'];
                if($verified == 1) {
                    header("Location: ../organizerHome.php");
                    exit();
                } else {
                    header("Location: ../login.php?account=notverified");
                }

                
            }
        }
    }
} else { 
    header("Location: ../login.php?login=error");
    exit();
}