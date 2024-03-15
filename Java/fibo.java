import java.util.Scanner; 

class fibo {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter Range = ");
        int num = sc.nextInt(); int n1 = 0 , n2 = 1;
        System.out.println(n1);
        System.out.println(n2);
        for(int i = 0; i<=num; i++){
            int n3 = n1+n2;
            System.out.println(n3);
            n1 = n2;
            n2 = n3;
        }

        sc.close();
    }
}
