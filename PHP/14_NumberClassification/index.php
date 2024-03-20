<html>
<body>
    <h2>Check number is perfect, abundant or deficient.</h2>
    <form method="post" action="">
        Enter a positive integer: <input type="number" name="number" required>
        <input type="submit">
    </form>
    <?php
    if ($_POST) {
        $input = $_POST["number"];
        $divSum = 0;
        for ($i = 1; $i <= $input / 2; $i++) {
            if ($input % $i === 0) {
                $divSum += $i;
            }
        }        
        if ($divSum == $input) {
            echo "$input is a perfect number.";
        } elseif ($divSum > $input) {
            echo "$input is an abundant number.";
        } else {
            echo "$input is a deficient number.";
        }
    }
    ?>
</body>
</html>