public class ThisType3 {
    public ThisType3 temp(){
        return this;
    }   
    void show(){
        System.out.println(this);
    }
    public static void main(String[] args) {
        ThisType3 obj = new ThisType3();
        obj.temp().show();
    }
}