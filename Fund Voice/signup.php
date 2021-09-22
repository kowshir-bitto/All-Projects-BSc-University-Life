<?php
    include_once 'header.php';
?>

    <link rel="stylesheet" href="assets/css/signup.css">
    
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

        <div class="btn-login-signup">
            <button type="submit" id="btn-login" onclick="window.location.href='login.php'">LOGIN</button>
        </div>
    </div>


    <div class="successMessage">
        <?php 
                    if(isset($_GET['signup'])) {
                        if($_GET['signup'] == "invalidname") {
                            echo "<span style='color: red; font-size:30px;'>!</span> The Full name you entered is not valid. Please enter a valid name.";
                        }
                    }
        ?>

           
        <?php 
                    if(isset($_GET['signup'])) {
                        if($_GET['signup'] == "usernametaken") {
                            echo "<span style='color: red; font-size:30px;'>!</span> The Username is already taken.";
                        }
                    }
        ?>
    </div>

    <div class="banner">
        <span id="banner-quote">
        </span>
    </div>

    <div class="signupbox">
        <div class="boxone">
            <span id="signuptext">Sign Up As Organizer</span>
        </div>

        <div class="boxtwo">
            <br><br>
            <form onsubmit='return signupFormValidate();' action="includes/signup.inc.php" method="POST">
                <input type="text" name="fullname" placeholder="Enter full Name" required><br><br>
                <input type="text" name="username" placeholder="Username" pattern="[A-Za-z0-9]+" title="Username should only contain letters and numbers only. e.g. john12345" required><br><br>
                <input type="email" name="email" placeholder="E-mail" required><br><br>
                <input type="password" id = "password" name="password" placeholder="Password" required><br><br>
                <input type="password" id="repeat-passwordS" name="repeat-password" placeholder="Confirm password" required><br><br>
                <input type="tel" name="phone" placeholder="Phone: +880********" pattern="[0-9]{11}" required><br><br>
                <input type="checkbox" name="" required><span id="agreeterms"> Agree all terms and conditions</span><br>
                <input type="submit" name="submit" value="Sign Up" id="submit">
            </form>
        </div>
    </div>
    
<script src="assets/js/signup.js"></script>
  
<?php
    include_once 'footer.php';
?>