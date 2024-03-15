public class P2 {
    public static void main(String[] args) {
        int num1 = 10, num2 = 40, num3 = 30;
        if (num1 > num2 && num1 > num3) {
            System.out.println("Num1 is Maximum" );
        }
        else if (num2 > num1 && num2 > num3) {
            System.out.println("Num2 is Maximum");
        }
        else {
            System.out.println("Num3 is Maximum");
        }
    }
    
}