<?php
    include_once 'header.php';
?>

    <link rel="stylesheet" href="assets/css/createNewPassword.css">
</head>
<body>
    <div class="nav-bar">
        <a href="index.php">
            <img src="assets/images/logo.png" alt="Fund voice logo">
        </a>
         
        <div class="nav-links">
            <a href="campaigns.php">CAMPAIGNS</a>
            <a href="donors.php">DONORS</a>
        </div>

    </div>


    <div class="message">
  
        <?php 
                    if(isset($_GET['password'])) {
                        if($_GET['password'] == "notsame") {
                            echo "The passwords you entered must be same";
                        }
                    }
        ?>


        <?php 
                    if(isset($_GET['reset'])) {
                        if($_GET['reset'] == "alreadyReset") {
                            echo "you need to resubmit your reset request! or you have already change your password with this link";
                        }
                    }
        ?>
    </div>

    <div class="resetPasswordBoxContainer">
            <?php
                $selector = $_GET["selector"];
                $validator = $_GET["validator"];

                if(empty($selector) || empty($validator)) {
                    echo 'Could not validate your request!';
                } else {
                    if(ctype_xdigit($selector) !== false && ctype_xdigit($validator) !== false) { 
            ?>
                        <form action="includes/resetPassword.inc.php" method="POST">
                            <input type="hidden" name="selector" value="<?php echo $selector; ?>">
                            <input type="hidden" name="validator" value="<?php echo $validator; ?>">
                            <input type="password" name="password" placeholder="Enter a new password" required>
                            <input type="password" name="repeatPassword" placeholder="Repeat new password" required><br>
                            <button type="submit" name="resetPasswordSubmit">Reset Password</button>
                        </form>
            <?php

                    }
                }
            ?>
    </div>


<?php
    include_once 'footer.php';
?>