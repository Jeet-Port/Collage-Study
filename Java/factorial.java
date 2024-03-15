import java.util.Scanner; 

class factorial {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter Number = ");
        int num = sc.nextInt();
        int total = 1;
        for(int i=1; i<=num; i++){
            total*=i;
        }
        sc.close();
        System.out.printf("Factorial of %d = %d\n",num,total);
    }
}