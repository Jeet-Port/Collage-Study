public class P3 {
    public static void main(String[] args) {
        System.out.println("For Loop");
        for (int i = 0; i < 5; i++) {
            System.out.println(i);
        }

        System.out.println("\nWhile Loop");
        int j = 10;
        while (j>5) {
            System.out.println(j);
            j--;
        }

        System.out.println("\nDo-While Loop");
        int k = 5;
        do {
            System.out.println(k);
            k++;
        } while (k<10);

        System.out.println("\nFor Each Loop");
        String[] name = {"Jeet", "Aayush", "Parth"};
        for (String n : name) {
            System.out.println(n);
        }
    }
}
