class A{
    void show(){
        System.out.println("Hello Jeet");
    }
}
class B extends A{
    void show(){
        System.out.println("LoL, You got Hacked");
    }
}

public class P15 {
    public static void main(String[] args) {
        B obj = new B();
        obj.show();
    }
}
