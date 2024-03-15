public class ThisType2 {
    ThisType2(){
        System.out.println("Hello Jeet");
    }
    ThisType2(int a){
        this();
        System.out.println(a);
    }
    public static void main(String[] args) {
        ThisType2 obj = new ThisType2(7);
    }
}
