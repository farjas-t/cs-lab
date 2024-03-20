<?php
if (isset($_GET['number'])) {
    $number = intval($_GET['number']);
    $table = '';
    for ($i = 1; $i <= 10; $i++) {
        $result = $number * $i;
        $table .= "$number x $i = $result<br>";
    }
    echo $table;
} else {
    echo "Please provide a number parameter.";
}
?>
