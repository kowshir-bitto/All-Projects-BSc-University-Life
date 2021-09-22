<?php

if(isset($_POST['resetRequestSubmit'])) {
    $selector = bin2hex(random_bytes(8));
    $token = random_bytes(32); 


    $url = "http://localhost:8080/Fundvoice/createNewPassword.php?selector=".$selector."&validator=".bin2hex($token);

    $expires = date("U") + 1800; 

    require 'dbh.inc.php';

    $userEmail = $_POST['email'];

    
    $sql = "DELETE From pwdReset WHERE pwdResetEmail=?";
    $stmt = mysqli_stmt_init($conn);
    if(!mysqli_stmt_prepare($stmt, $sql)) { 
        echo "there was an error deleting";
        exit();
    } else {
        mysqli_stmt_bind_param($stmt, "s", $userEmail);
        mysqli_stmt_execute($stmt);
    }

    $sql = "INSERT INTO pwdReset (pwdResetEmail, pwdResetSelector, pwdResetToken, pwdResetExpires) VALUES (?,?,?,?)";
    $stmt = mysqli_stmt_init($conn);
    if(!mysqli_stmt_prepare($stmt, $sql)) { 
        echo "There was an error inserting";
        exit();
    } else {
    
        $hashedToken = password_hash($token, PASSWORD_DEFAULT); 
        mysqli_stmt_bind_param($stmt, "ssss", $userEmail, $selector, $hashedToken, $expires);
        mysqli_stmt_execute($stmt);
    }
    mysqli_stmt_close($stmt);
    mysqli_close($conn);




$to = $userEmail;
$subject = 'Reset your password as oraganizer for fund raiser';
$message = '<p>We received a password reset request. The link to reset your password     . Here is your password reset link:</br>';
$message .= '<a href="' .$url. '">' .$url.  '</a></p>';

$headers = "From: Fund voice <abu35-2379@diu.edu.bd>\r\n";
$headers .= "Reply-To: abu35-2379@diu.edu.bd\r\n";
$headers .= "Content-type: text/html\r\n"; 

mail($to, $subject, $message, $headers);

header("Location: ../resetPassword.php?reset=success");


} else {
    header("Location: ../index.php");
}