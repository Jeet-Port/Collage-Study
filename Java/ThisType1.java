public class ThisType1 {
    int a;String b;
    ThisType1(int a, String b){
        this.a = a;
        this.b = b;
    }
    public void show(){
        System.out.println(a +" "+ b);
    }
    public static void main(String[] args) {
        ThisType1 obj = new ThisType1(11, "Jeet");
        obj.show();
    }

}
