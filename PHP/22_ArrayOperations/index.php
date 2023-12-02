<html>
<body>
    <h1>Array Operations</h1>
    <form action="" method="post">
        <input type=radio name=choice value=display>Display Array<br />
        <input type=radio name=choice value=sort>Sorted Array<br />
        <input type=radio name=choice value=dupli>Without Duplicate<br />
        <input type=radio name=choice value=pop>Delete Last<br />
        <input type=radio name=choice value=rev>Array Reverse<br />
        <input type=radio name=choice value=search>Array Search<br /><br/>
        <input type=Submit>
</body>
</html>
<?php
if ($_POST) {
    $countries = array("Chile", "Colombia", "Pakistan", "Pakistan", "Italy","Chile", "Austria", "New Zealand", "United States");
    $val = $_POST['choice'];
    switch ($val) {
        case "display":
            foreach ($countries as $value)
                echo "<br>" . $value;
            break;
        case "sort":
            sort($countries);
            foreach ($countries as $value)
                echo "<br>" . $value;
            break;
        case "dupli":
            $uarray = array_unique($countries);
            foreach ($uarray as $value)
                echo "<br>" . $value;
            break;
        case "pop":
            array_pop($countries);
            foreach ($countries as $value)
                echo "<br>" . $value;
            break;
        case "rev":
            $revarr = array_reverse($countries);
            foreach ($revarr as $value)
                echo "<br>" . $value;
            break;
        case "search":
            echo "<br/><br/>Position - " . array_search("Italy", $countries, true);
            break;
    }
}
?>