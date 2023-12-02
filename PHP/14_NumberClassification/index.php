<html>
<body>
    <h2>Check number is perfect, abundant or deficient.</h2>
    <form method="post" action="">
        Enter a positive integer: <input type="number" name="number" required>
        <input type="submit" value="Check">
    </form>
    <?php
    function classifyNumber($number) {
        if ($number <= 0) {
            return "Please enter a positive integer.";
        }       
        $divSum = 0;
        for ($i = 1; $i <= $number / 2; $i++) {
            if ($number % $i === 0) {
                $divSum += $i;
            }
        }        
        if ($divSum == $number) {
            return "$number is a perfect number.";
        } elseif ($divSum > $number) {
            return "$number is an abundant number.";
        } else {
            return "$number is a deficient number.";
        }
    }
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $input = $_POST["number"];
        $result = classifyNumber($input);
        echo "<p>$result</p>";
    }
    ?>
</body>
</html>