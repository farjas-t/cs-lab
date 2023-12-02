<!DOCTYPE html>
<html>
<head>
    <title>Multiplication Table</title>
</head>
<body>
    <h1>Multiplication Table</h1>
    Enter a number: <input type="text" id="numberInput" onkeyup="generateTable()">
   
    <div id="tableOutput"></div>

    <script>
        function generateTable() {
            var number = document.getElementById("numberInput").value;
            var limit = 10; 
            var outputDiv = document.getElementById("tableOutput");
            var xhr = new XMLHttpRequest();
            xhr.open("GET", "multiplication.php?number=" + number + "&limit=" + limit, true);

            xhr.onreadystatechange = function() {
                if (xhr.readyState == 4 && xhr.status == 200) {
                    outputDiv.innerHTML = xhr.responseText;
                }
            };

            xhr.send();
        }
    </script>
</body>
</html>
