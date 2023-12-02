<!DOCTYPE html>
<html>
<head>
    <title>Bank Transactions</title>
</head>
<body>
    <h2>Bank Transactions</h2>
    <form action="" method="post">
        Account Number: <input type="text" name="accno" required><br><br>
        Amount: <input type="text" name="amount" required><br><br>
        Transaction Type:
        <input type="radio" name="transaction_type" value="deposit" required>Deposit
        <input type="radio" name="transaction_type" value="withdraw" required>Withdrawal<br><br>
        <input type="submit" value="Submit">
    </form>
</body>
</html>
<?php
$conn = pg_connect("host=localhost dbname=mamo user=postgres password=mamo");
if (!$conn) {
    die("Connection failed: " . pg_last_error());
}
$accno = $_POST['accno'];
$amount = $_POST['amount'];
$transaction_type = $_POST['transaction_type'];
$query = "SELECT balance FROM bank WHERE accno = $accno";
$result = pg_query($conn, $query);
if ($result) {
    $row = pg_fetch_assoc($result);
    $current_balance = $row['balance'];
    if ($transaction_type === "deposit") {
        $new_balance = $current_balance + $amount;
    } elseif ($transaction_type === "withdraw") {
        $new_balance = $current_balance - $amount;
    }
    $update_query = "UPDATE bank SET balance = $new_balance WHERE accno = $accno";
    $update_result = pg_query($conn, $update_query);

    if ($update_result) {
        echo "Transaction completed successfully. New balance : $new_balance";
    } else {
        echo "Error updating balance: " . pg_last_error();
    }
} else {
    echo "Account not found.";
}
pg_close($conn);
?>