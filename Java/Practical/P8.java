public class P8{
    public static void main(String[] args) {
        System.out.println("Sum1 = "+sum(11, 7));
        System.out.println("Sum2 = "+sum(7, 11, 6));
    }
    public static int sum(int a, int b) {
        return a+b;
    }
    public static int sum(int a, int b, int c) {
        return a+b+c;
    }
}