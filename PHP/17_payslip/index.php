<!DOCTYPE html>
<html>
<head>
    <title>Employee Pay Slip</title>
</head>
<body>
    <h1>Employee Pay Slip</h1>
    <form method="post">
        <label for="name">Employee Name:</label>
        <input type="text" name="name" required><br><br>
        <label for="basic_salary">Basic Salary:</label>
        <input type="number" name="basic_salary" required><br><br>
        <label for="designation">Designation:</label>
        <select name="designation" required>
            <option value="Manager">Manager</option>
            <option value="Supervisor">Supervisor</option>
            <option value="Clerk">Clerk</option>
            <option value="Peon">Peon</option>
        </select><br><br>

        <input type="submit" name="generate" value="Generate Pay Slip">
    </form>
    <?php
    if (isset($_POST['generate'])) {
        $name = $_POST['name'];
        $basic_salary = $_POST['basic_salary'];
        $designation = $_POST['designation'];
        $conveyance = 0;
        $extra_allowance = 0;
        $allowance = 0;
        $income_tax = 0;
        switch ($designation) {
            case 'Manager':
                $conveyance = 1000;
                $extra_allowance = 500;
                break;
            case 'Supervisor':
                $conveyance = 750;
                $extra_allowance = 200;
                break;
            case 'Clerk':
                $conveyance = 500;
                $extra_allowance = 100;
                break;
            case 'Peon':
                $conveyance = 250;
                break;
        }
        $hra = 0.25 * $basic_salary;
        $gross = $basic_salary + $hra + $conveyance + $extra_allowance + $allowance;
        if ($gross <= 2500) {
            $income_tax = 0;
        } elseif ($gross <= 4000) {
            $income_tax = 0.03 * $gross;
        } elseif ($gross <= 5000) {
            $income_tax = 0.05 * $gross;
        } else {
            $income_tax = 0.08 * $gross;
        }
        $net_salary = $gross - $income_tax;
        echo "<h2>Pay Slip for $name</h2>";
        echo "<p><strong>Basic Salary:</strong> $basic_salary</p>";
        echo "<p><strong>HRA:</strong> $hra</p>";
        echo "<p><strong>Conveyance Allowance:</strong> $conveyance</p>";
        echo "<p><strong>Extra Allowance:</strong> $extra_allowance</p>";
        echo "<p><strong>Allowance:</strong> $allowance</p>";
        echo "<p><strong>Gross Salary:</strong> $gross</p>";
        echo "<p><strong>Income Tax:</strong> $income_tax</p>";
        echo "<p><strong>Net Salary:</strong> $net_salary</p>";
    }
    ?>
</body>
</html>
