<?php
$con = pg_connect("host=localhost user=postgres password=mamo dbname=mamo");
if ($con) {
    echo "Successfully Connected.";
} else {
    echo "Error Connecting to the database";
}
$queryCreateTable = "CREATE TABLE IF NOT EXISTS product (
    itemcode serial PRIMARY KEY,
    itemname varchar(255) NOT NULL,
    unitprice numeric(10, 2) NOT NULL
)";
pg_query($con, $queryCreateTable);
$sampleData = [
    ['itemname' => 'Coffee', 'unitprice' => 19.99],
    ['itemname' => 'Tea', 'unitprice' => 10.00],
    ['itemname' => 'Burger', 'unitprice' => 120.00],
    ['itemname' => 'Lime', 'unitprice' => 20.00],
    ['itemname' => 'Pizza', 'unitprice' => 250.00]
];

foreach ($sampleData as $data) {
    $queryInsert = "INSERT INTO product (itemname, unitprice) VALUES ('" . $data['itemname'] . "', " . $data['unitprice'] . ")";
    pg_query($con, $queryInsert);
}
$querySelect = "SELECT * FROM product";
$result = pg_query($con, $querySelect);
?>

<html>
    <body>
        <table>
            <tr>
                <th>Item Code</th>
                <th>Item Name</th>
                <th>Unit Price</th>
            </tr>
            <?php
            while ($row = pg_fetch_assoc($result)) {
                echo "<tr>";
                echo "<td>" . $row['itemcode'] . "</td>";
                echo "<td>" . $row['itemname'] . "</td>";
                echo "<td>" . $row['unitprice'] . "</td>";
                echo "</tr>";
            }
            ?>
        </table>
    </body>
</html>
