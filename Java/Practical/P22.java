public class P22 {
    public static void main(String[] args) {
        try {
            int[] numbers = { 1, 2, 3 };
            
            try {
                int result = numbers[3] / 0; 
                System.out.println("Result: " + result);
            } catch (ArithmeticException e) {
                System.err.println("Error (Try Block 1): Division by zero is not allowed.");
            }
            
            // Try block 2
            try {
                String str = null;
                int length = str.length();
                System.out.println("String length: " + length);
            } catch (NullPointerException e) {
                System.err.println("Error (Try Block 2): Null pointer exception.");
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.err.println("Error (Main Try Block): Array index out of bounds.");
        }

        System.out.println("Program continues after exceptions.");
    }
}

