public class P9 {
    P9(int a, int b){
        System.out.println(a+" "+b);
    }
    P9(int a, int b, int c){
        System.out.println(a+" "+b+" "+c);
    }
    public static void main(String[] args) {
        P9 obj = new P9(11, 7);
        P9 obj2 = new P9(11, 7, 6);
        
    }
}