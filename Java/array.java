import java.util.Scanner;

public class array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a[] = new int[10];
        for (int i = 1; i <= 10; i++) {
            System.out.printf("Enter a[%d] = ",i);
            a[i] = sc.nextInt();
        }
        for (int i = 1; i < a.length; i++) {
            System.out.println(a[i]);
        }
        sc.close();
    }
}