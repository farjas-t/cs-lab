<?php
if ($_POST) {
    $usrname = $_POST['usr'];
    $passwd = $_POST['pass'];

    $qry = "SELECT username, password FROM users WHERE username='$usrname' AND password='$passwd'";
    $result = pg_query($con, $qry);

    if (!$result) {
        echo "Query Error: " . pg_last_error($con);
    } else {
        $row = pg_fetch_row($result);
        
        if ($row) {
            echo "<br>Hello $usrname, You are Logged Successfully...";
        } else {
            echo "<br> Incorrect username or password";
        }
    }
}
?>