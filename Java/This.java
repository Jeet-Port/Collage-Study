public class This {
    public static void main(String[] args) {
        This obj = new This();
        System.out.println(obj);
        obj.show();
    }
    public void show(){
        System.out.println(this);
    }
}
