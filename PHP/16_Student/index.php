<?php
$con = pg_connect("host=localhost user=postgres password=mamo dbname=mamo");
if ($con) {
    echo "Successfully Connected.";
} else {
    echo "Error Connecting to the database";
}
?>

<html>

<body>
    <h1>Marksheet</h1>
    <form method="POST" action="">
        Regno: <input type="text" name="txtreg" />
        <input type="submit" value="Get Result">
    </form>
</body>

</html>

<?php
if ($_POST) {
    $rg = $_POST['txtreg'];
    $qry = "SELECT * from student WHERE regno='$rg'";
    $result = pg_query($con, $qry);
    while ($row = pg_fetch_row($result)) {
        echo " rollno: $row[0]<br> name: $row[1]<br> mark: $row[2]<br> grade: $row[3]";
    }
}
?>