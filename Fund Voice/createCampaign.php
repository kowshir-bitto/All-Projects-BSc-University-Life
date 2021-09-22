<?php
    session_start();
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Fund Voice</title>
    <link rel="stylesheet" href="assets/css/createCampaign.css">
</head>

<body>
    <div class="nav-bar">
        <a href="index.php">
            <img src="assets/images/logo.png" alt="Fund Voice logo">
        </a>
         
        <div class="nav-links">
            <a href="campaigns.php">CAMPAIGNS</a>
            <a href="donors.php">DONORS</a>
        </div>

        <?php
            if(!isset($_SESSION['o_id'])) { 
                header("Location: index.php");                
            } else { 
                echo '<form action="includes/Logout.inc.php" method="POST">
                        <div class="btn-login-signup">
                            <button type="submit" id="btn-login" name="submit">LOGOUT</button>
                        </div>
                      </form>';
            }
        ?>
    </div>


    <div class="signupbox">
        <div class="boxone">
            <span id="create">Create Campaigns for Funds</span>
        </div>

        <div class="boxtwo">
        <br>
            <form action="includes/createCampaign.inc.php" method="POST" enctype="multipart/form-data">
                <input type="text" name="campaignName" placeholder="Campaign name" required><br><br>
                <select name="campaignType" required>
                    <option disabled selected>Type of Campaign</option>
                    <option value="natural disaster">NATURAL DISASTER</option>
                    <option value="social">EDUCATION</option>
                    <option value="others">FOOD</option>  
                </select><br><br>
                <input type="number" min="1" name="campaignDays" placeholder="Estimated Days" required><br><br>
                <input type="text" name="campaignAmount" placeholder="Estimated Amount" required><br><br>
                <textarea rows="5" cols="50" name="campaignDescription" placeholder="Description of your campaign" required></textarea><br><br>
                <input type="tel" name="phone" placeholder="Phone: +88********" pattern="[0-9]{11}" required><br><br>
        
                <span id="campaignImage">Upload image of campaign</span> <br>
                <input type="file" name="campaignPhoto" accept="image/*"><br><br>
                <input type="checkbox" required><span id="agreeterms"> Agree all terms and conditions</span><br>
                <input type="submit" name="submit" value="Create Campaign">
            </form>
        </div>
    </div>

    <div class="extraInfo">
        <div class="infoTextHeading">
        <span id="create">Details to be filled:</span>
        </div>

        <div class="infoText">
            <ul>
                <li>Enter the name of your campaign.</li>
                <li>Enter the type which fits your campaign</li>
                <li>Enter the number of days you want to run the campaign and estimated amount.</li>
                <li>Enter the detailed description of your campaign. Why it is necessary and for whom you are creating this campaign etc.</li>
                <li>Enter the phone number of the person associated with this campaign.</li>
                <li>Upload the image the suits the campaign.(Optional)</li>
            </ul>
        </div>
    </div>


    <?php
        include_once 'footer.php';
    ?>