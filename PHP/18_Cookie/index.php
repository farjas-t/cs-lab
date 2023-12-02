
<?php
    if (isset($_COOKIE['lastVisited'])) {
        echo "<h2>Last visited:</h2> <h1>" . $_COOKIE['lastVisited'] . "</h1>";
    }
    $currentDateTime = date('Y-m-d H:i:s');
    setcookie('lastVisited', $currentDateTime, time() + (86400 * 30), '/');
?>