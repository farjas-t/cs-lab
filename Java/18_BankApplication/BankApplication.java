class MinBalExp extends Exception {
    public MinBalExp(String message) {
        super(message);
    }
}

class Account {
    private double balance;
    public Account(double initialBalance) {
        this.balance = initialBalance;
    }
    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposit of $" + amount + " successful. New balance: $" + balance);
    }
    public void withdraw(double amount) throws MinBalExp {
        if (amount > balance) {
            throw new MinBalExp("Withdrawal amount exceeds available balance.");
        } else {
            balance -= amount;
            System.out.println("Withdrawal of $" + amount + " successful. New balance: $" + balance);
        }
    }
    public double getBalance() {
        return balance;
    }
}

public class BankApplication {
    public static void main(String[] args) {
        Account myAccount = new Account(1000);
        myAccount.deposit(500);
        try {
            myAccount.withdraw(1500);
        } catch (MinBalExp e) {
            System.out.println("Exception: " + e.getMessage());
        }
        try {
            myAccount.withdraw(800);
        } catch (MinBalExp e) {
            System.out.println("Exception: " + e.getMessage());
        }
        System.out.println("Current balance: $" + myAccount.getBalance());
    }
}