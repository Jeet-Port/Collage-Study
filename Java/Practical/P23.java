class NotSufficientFundException extends Exception {
    public NotSufficientFundException(String message) {
        super(message);
    }
}

class BankAccount {
    private double balance;

    public BankAccount(double initialDeposit) {
        balance = initialDeposit;
    }

    public double getBalance() {
        return balance;
    }

    public void deposit(double amount) {
        balance += amount;
    }

    public void withdraw(double amount) throws NotSufficientFundException {
        if (amount > balance) {
            throw new NotSufficientFundException("Not Sufficient Fund");
        } else {
            balance -= amount;
        }
    }
}

public class P23{
    public static void main(String[] args) {
        BankAccount account = new BankAccount(1000.00);

        System.out.println("Initial balance: Rs " + account.getBalance());

        try {
            System.out.println("Withdrawing Rs 400.00");
            account.withdraw(400.00);
            System.out.println("New balance: Rs " + account.getBalance());

            System.out.println("Withdrawing Rs 300.00");
            account.withdraw(300.00);
            System.out.println("New balance: Rs " + account.getBalance());

            System.out.println("Withdrawing Rs 500.00");
            account.withdraw(500.00);
            System.out.println("New balance: Rs " + account.getBalance());
        } catch (NotSufficientFundException e) {
            System.out.println(e.getMessage());
        }
    }
}