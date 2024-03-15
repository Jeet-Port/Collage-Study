public class Constructor {
    int a;
    Constructor(int num){
        a = 50;
        int b = num;
        System.out.println(a);
        System.out.println(b);
    }
    Constructor(Constructor dup){
        System.out.println(dup.a);
    }
    public static void main(String[] args) {
        Constructor obj = new Constructor(10);
        Constructor objDup = new Constructor(obj);

    }
}
