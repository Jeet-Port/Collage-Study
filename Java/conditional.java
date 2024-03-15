import java.util.Scanner; 

public class conditional{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter Value of a = ");
        int a = sc.nextInt();
        System.out.printf("Enter Value of b = ");
        int b = sc.nextInt();
        System.out.printf("Enter Value of c = ");
        int c = sc.nextInt();
        System.out.println("a = "+a+", b = "+b+", c = "+c);
        
        
        /* if-else  */
        System.out.println("---------- if - else ----------");
        if (a>b) {
            System.out.println("A is big number");
        } else {
            System.out.println("b is big Number");
        }
        
        /* nested-if-else  */
        System.out.println("---------- nested - if - else ----------");
        if (a>b) {
            if (a>c) {
                System.out.println("A is big Number");
            }
            else{
                System.out.println("C is big Number");
            }
        } 
        else {
            System.out.println("B is big Number");
        }
        
        /* if-else-ladder */
        System.out.println("---------- if - else - ladder ----------");
        if (a>b) {
            System.out.println("a is bigger");
        }
        else if (b<c) {
            System.out.println("c is bigger");
        }
        else {
            System.out.println("b is bigger");
        }
        
        /* switch case */
        System.out.println("---------- Switch Case ----------");
        System.out.printf("Enter number from 1 to 7 = ");
        int day = sc.nextInt();
        switch (day) {
            case 1:
            System.out.println("Monday");
            break;
            case 2:
            System.out.println("Tuesday");
            break;
            case 3:
            System.out.println("wednesday");
            break;
            case 4:
            System.out.println("Thursday");
            break;
            case 5:
            System.out.println("Friday");
            break;
            case 6:
            System.out.println("saturday");
            break;
            case 7:
            System.out.println("Sunday");
            break;
            default:
            System.out.println("Wrong Number");
            break;
        }
        sc.close();
    }
}