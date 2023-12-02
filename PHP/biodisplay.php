<?php
if ($_POST) {
    echo "<h1>Biodata</h1>";
    echo "<h3>Name: " . $_POST["name1"] . "<br><br>";
    echo "Address: " . $_POST["address"] . "<br><br>";
    echo "Age: " . $_POST["age"] . "<br><br>";
    echo "Mobile: " . $_POST["phone"] . "<br><br>";
    echo "Email: " . $_POST["email"] . "<br><br>";
    echo "Qualification: " . $_POST["qualification"] . "<br><br></h3>";
}
?>