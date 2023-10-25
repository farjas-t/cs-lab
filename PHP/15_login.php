<?php
$con = pg_connect("host=localhost user=postgres password=mamo dbname=mamo");
if ($con) {
    echo "Successfully Connected.";
} else {
    echo "Error Connecting to the database";
}
?>

<html>
<head></head>
<body>
    <h1>Login</h1>
    <form action="login.php" method="POST">
        Username:<input type="text" name="usr"><br><br>
        Password:<input type="password" name="pass"><br><br><br>
        <button type="submit">login</button>
    </form>
</body>
</html>
