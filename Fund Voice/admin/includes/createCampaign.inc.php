<?php

$campaigncreator ="Admin";

if(!isset($_POST['submit'])) { 
    header("Location: ../addEventByAdmin.php");
    exit();
} else {

    include_once 'dbh.inc.php'; 

    $campaignName = $_POST['campaignName'];
    $campaignType = $_POST['campaignType'];
    $campaignDays = $_POST['campaignDays'];
    $campaignAmount = $_POST['campaignAmount'];
    $campaignDescription = $_POST['campaignDescription'];
    $campaignPhone = $_POST['phone'];
    $campaignApproval = '1';

    if(!preg_match("/^[a-zA-Z'. -]+$/", $campaignName)) {    
        header("Location: ../addEventByAdmin.php?campaign=invalidname");
        exit();
    } else {
       
        $sql = "SELECT * FROM campaigns WHERE campaign_name = '$campaignName'";
        $result = mysqli_query($conn, $sql);
        $resultCheck = mysqli_num_rows($result);
        if($resultCheck > 0) {
            header("Location: ../addEventByAdmin.php?campaign=camapignNameTaken");
            exit();
        } else {


            $filename = $_FILES['campaignPhoto']['name'];
            $tempname = $_FILES['campaignPhoto']['tmp_name'];
            $filename = md5($filename.time());
            $campaignImagePath = "assets/images/campaignImages/".$filename;
            
            move_uploaded_file($tempname,$campaignImagePath);


             $sql = "INSERT INTO campaigns(campaign_name, campaign_type, campaign_days, campaign_amount, campaign_description,campaignPhone,campaignImage,`campaignCreator`,`campaignApproval`) VALUES('$campaignName','$campaignType',$campaignDays,$campaignAmount,'$campaignDescription',$campaignPhone,'$campaignImagePath','$campaigncreator','$campaignApproval');";
             $insertSuccess = mysqli_query($conn, $sql);

           
             if($insertSuccess) {
                echo "<h1>inserted into database</h1>";
                header("Location: ../includes/successEvent.php");
             } else {
                 echo $conn->error;
             }
        }
    }

}