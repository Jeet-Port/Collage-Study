class DivideByZeroException extends Exception {
    public DivideByZeroException() {
        super("Division by zero is not allowed.");
    }
}

public class P21 {
    public static void main(String[] args) {
        try {
            int numerator = 10;
            int denominator = 0;

            int result = divide(numerator, denominator);
            System.out.println("Result: " + result);
        } catch (DivideByZeroException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    public static int divide(int numerator, int denominator) throws DivideByZeroException {
        if (denominator == 0) {
            throw new DivideByZeroException();
        }
        return numerator / denominator;
    }
}
