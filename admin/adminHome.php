<?php
        require_once 'header.php';
        if(!isset($_SESSION['admin_username'])) {
        }
?>

</head>
<body>
        <?php 
            echo "this is the admin Home page";
                
            if(isset($_SESSION['admin_username'])) { 
                echo '<form action="includes/logout.inc.php" method="POST">
                <button type="submit" name="submit">Logout</button>
                </form>';
            } else {
        
            }
        ?>
    
</body>
</html>