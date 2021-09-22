<?php

    if(isset($_GET['campaignId'])) {
        $campaignId = $_GET['campaignId'];
    } else {
        header("Location: campaigns.php");
    }

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Fund Voice</title>
    <link rel="stylesheet" href="assets/css/donate.css">

    <script src="https://khalti.com/static/khalti-checkout.js"></script>
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

        <div class="btn-login-signup">
            <button type="submit" id="btn-login" onclick="window.location.href='login.php'">LOGIN</button>
            <button type="submit" id="btn-signup" onclick="window.location.href='signup.php'">SIGN UP</button>
        </div>
    </div>

    <div class="main-container">
        <br>
        <h1>Donate via Bank </h1>

        <div class="bank-details">
            <h2>You can donate in this campaign via Bank Transfer. The Bank details are below:</h2><hr>
                <div class="banks">
                    <table>
                        <tr>
                            <th colspan="3">Brac  Bank</th>
                            
                        </tr>
                        <tr>
                            <td>Account Holder</td>
                            <td>:</td>
                            <td>Bitto Kowshir</td>
                        </tr>
                        <tr>
                            <td>Account Number</td>
                            <td>:</td>
                            <td>23423434234234324</td>
                        </tr>
                    </table>
                    <br>
                    <table>
                        <tr>
                            <th colspan="3"> Asia Bank</th>
                            
                        </tr>
                        <tr>
                            <td>Account Holder</td>
                            <td>:</td>
                            <td>Bitto Kowshir</td>
                        </tr>
                        <tr>
                            <td>Account Number</td>
                            <td>:</td>
                            <td>23423434234234324</td>
                        </tr>
                    </table>
                    <br>
                    <table>
                        <tr>
                            <th colspan="3">Sonali Bank</th>
                            
                        </tr>
                        <tr>
                            <td>Account Holder</td>
                            <td>:</td>
                            <td>Bitto Kowshir</td>
                        </tr>
                        <tr>
                            <td>Account Number</td>
                            <td>:</td>
                            <td>23423434234234324</td>
                        </tr>
                    </table>
                </div>
            <br><hr>
            <div class="donor-notice">Subscribe to Fund Voice, So that we can track your donation and guide you for the donatation process. Once you submit your details, We will send you an email and you can submit the proof of the donation that you made. By doing this, you will be listed in our donor list as an donor.
                The proof file can simply be:
                <ul>
                    <li><strong>Bank deposit voucher or receipt</strong> </li>
                    <li><strong>Screenshot of the fund transfer success page(If donated via onine Banking or online payment wallet)</strong></li>
                </ul>
            </div><br><hr>
            <h2>Be in touch with us</h2>
            <div class="donor-form">
                <div class="boxtwo">
                <br><br>
                    <form action="includes/donate.inc.php?campaignId=<?php echo $campaignId;?>" method="POST">
                        <input type="text" name="fullname" placeholder="Enter full Name" required><br><br>
                        <input type="email" name="email" placeholder="E-mail" required><br><br>
                        <input type="submit" name="submit" value="Subscribe" id="submit">
                    </form>
                </div>
            </div>
        </div>
        <hr>
        <br>
        <br>
        <br>
        <h1> Online Payment Gateway</h1>

        <div class="khalti-details">
            <h2>You can donate in this campaign via online payment gateway </h2>
            <button id="payment-button">Donate with DBBL</button>
        </div>
    </div>
    <br>
    <br>
    <br>
    <script>
        var config = {

            "publicKey": "test_public_key_dd21924111ba4f66a1abbddcf6eded68",
            "productIdentity": "1234567890",
            "productName": "Fund Voice",
            "productUrl": "http://gameofthrones.wikia.com/wiki/Dragons",
            "eventHandler": {
                onSuccess (payload) {

                    console.log(payload);
                },
                onError (error) {
                    console.log(error);
                },
                onClose () {
                    console.log('widget is closing');
                }
            }
        };

        var checkout = new KhaltiCheckout(config);
        var btn = document.getElementById("payment-button");
        btn.onclick = function () {
            checkout.show({amount: 1000});
        }
    </script>
    <br>
    <hr>
    <br> <br>
    <?php
        include_once 'footer.php';
    ?>