public class P10 {
    int a = 10;
    public static void main(String[] args) {
        P10 obj = new P10();
        System.out.println(obj);
        obj.show();
    }
    public void show(){
        System.out.println(this);
        System.out.println(this.a);
    }
}
