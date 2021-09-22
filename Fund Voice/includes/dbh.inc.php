<?php 

$dbServername = "localhost";
$dbUsername = "root";
$dbPassword = "";
$dbName = "fundvoice";


$conn = new mysqli($dbServername,$dbUsername,$dbPassword,$dbName);

if($conn -> connect_error) {
    die("connection failed:".$conn->connect_error);
}