<?php
$con = pg_connect("host=localhost user=postgres password=mamo dbname=postgres");
if ($con) {
    echo "Successfully Connected.";
} else {
    echo "Error Connecting to the database";
}
?>

<html>
<body>
    <h1>Login</h1>
    <form action="" method="POST">
        Username:<input type="text" name="usr"><br><br>
        Password:<input type="password" name="pass"><br><br><br>
        <button type="submit">login</button>
    </form>
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
                echo "<br>Hello $row[0], You are Logged Successfully...";
            } else {
                echo "<br> Incorrect username or password";
            }
        }
    }
    ?>
</body>
</html>
