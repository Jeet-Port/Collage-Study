public class P24 {
    public static void main(String[] args) {
        Runnable evenPrinter = () -> {
            for (int i = 2; i <= 50; i += 2) {
                System.out.println("Even: " + i);
            }
        };

        Runnable oddPrinter = () -> {
            for (int i = 1; i <= 50; i += 2) {
                System.out.println("Odd: " + i);
            }
        };

        Thread evenThread = new Thread(evenPrinter);
        Thread oddThread = new Thread(oddPrinter);

        evenThread.start();
        oddThread.start();
    }
}
