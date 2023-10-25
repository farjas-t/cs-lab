<?php
$expiration = time() + 60 * 60 * 24 * 60;
date_default_timezone_set('Asia/Kolkata');
setcookie('lastVisit', date("h:i:s A - d/m/y"), $expiration);
?>
<html>
<body>
    <h2> Last visited time on the web page</h2>
    <?php
    if (isset($_COOKIE['lastVisit'])) {
        echo "Your last visit was - " . $_COOKIE['lastVisit'];
    } else {
        echo "You have not visited this website before!";
    }
    ?>
</body>
</html>