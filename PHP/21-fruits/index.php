<html>

<body>
    <form action="" method="POST">
        Choose any fruit
        <select name="fruits">
            <option value="Mango">Mango</option>
            <option value="Grape">Grape</option>
            <option value="Banana">Banana</option>
            <option value="Chicku">Chicku</option>
            <option value="Apple">Apple</option>
            <option value="Orange">Orange</option>
            <option value="Pine Apple">Pine Apple</option>
        </select><br><br>
        <input type="submit" value="SELECT">
    </form>
</body>

</html>

<?php
if ($_POST) {
    echo "<h2> You have selected : </h2>";
    echo $_POST["fruits"];
}
?>