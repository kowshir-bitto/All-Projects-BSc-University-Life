<?php

if(isset($_GET['logout']) && $_GET['logout'] == 'done') {
    session_start(); 
    session_unset(); 
    session_destroy(); 
    header("Location: ../index.php");
    exit();
}