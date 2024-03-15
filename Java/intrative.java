public class intrative {
    public static void main(String[] args) {
        
        System.out.println("---------- for ----------");
        for (int i = 1; i <=5 ; i++) {
            for (int j = 0; j < i; j++) {
                System.out.printf("%d ",i);
            }
            System.out.println("");
        }

        System.out.println("---------- while ----------");
        int i = 0;
        do{
            System.out.println(i);
            i++;
        }while(i<=10);

        System.out.println("---------- while ----------");
        int j = 1;
        System.out.println("Even number from 1 to 10");
        while (j<=10) {
            if (j%2==0) {
                System.out.println(j);
            }    
            j++;
        }
    }
}
