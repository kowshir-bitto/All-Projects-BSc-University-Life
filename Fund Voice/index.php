<?php
    include_once 'header.php';
?>

    <link rel="stylesheet" href="assets/css/style.css">
</head>
<body>
    <div class="nav-bar">
        <a href="index.php">
            <img src="assets/images/logo.png" alt="Fund voice logo">
        </a>
         
        <div class="nav-links">
            <a href="campaigns.php">CAMPAIGNS</a>
            <a href="donors.php">DONORS</a>
            <a href="donors.php">BLOG</a>
        </div>

        <div class="btn-login-signup">
            <button type="submit" id="btn-login" onclick="window.location.href='login.php'">LOGIN</button>
            <button type="submit" id="btn-signup" onclick="window.location.href='signup.php'">SIGN UP</button>
        </div>
    </div>


    <img src="assets/images/canvas.png" alt="" id="canvas-image">
    <div class="banner">
        
        <span id="banner-quote">
        </span>
    </div>

    <div class="get-started">
        <span id="create-campaign">
        </span>

        <button type="submit" onclick="window.location.href='signup.php'">GET STARTED</button>
    </div>


<?php
    include_once 'footer.php';
?>