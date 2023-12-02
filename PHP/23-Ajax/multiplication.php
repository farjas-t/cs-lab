<?php
if (isset($_GET['number'])) {
    $number = intval($_GET['number']);
    $limit = isset($_GET['limit']) ? intval($_GET['limit']) : 10;
    $table = '';
    for ($i = 1; $i <= $limit; $i++) {
        $result = $number * $i;
        $table .= "$number x $i = $result<br>";
    }
    echo $table;
} else {
    echo "Please provide a number parameter.";
}
?>
