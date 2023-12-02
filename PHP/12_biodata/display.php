<!DOCTYPE html>
<html>
<head>
    <title>Bio Data</title>
</head>
<body>
    <h1>Bio Data</h1>
    <?php
        $name = $_POST["name"];
        $age = $_POST["age"];
        $gender = $_POST["gender"];
        $qual = $_POST["qualification"];
        echo "<p><strong>Name:</strong> $name</p>";
        echo "<p><strong>Age:</strong> $age</p>";
        echo "<p><strong>Gender:</strong> $gender</p>";
        echo "<p><strong>Qualification:</strong> $qual</p>"
    ?>
</body>
</html>
