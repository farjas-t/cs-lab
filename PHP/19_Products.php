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
        <table>
            <tr>
                <th>item code</th>
                <th>item name</th>
                <th>unit price</th>
            </tr>
            <?php
            $qry = "SELECT * FROM product";
            $result = pg_query($con, $qry);
            $pg_fetch_row($result);
            ?>
        </table>
    </body>
</html>