<html>

<body>
    <form action="" method="POST">
        <H1>Reverse a string</h1>
        Enter the string :
        <input type="text" name="str" />
        <input type="submit" />
    </form>

</html>
<?php
if ($_POST) {
    $string = $_POST["str"];
    $len = strlen($string);
    for ($i = ($len - 1); $i >= 0; $i--) {
        echo $string[$i];
    }
}
?>