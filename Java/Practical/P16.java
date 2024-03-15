class A{
    A(){
        System.out.println("Super");
    }
    int a = 10;
    void show(){
        System.out.println("That's Using Super keyword");
    }
}
class B extends A{
    B(){
        super();
    }
    void run(){
        System.out.println(super.a);
        super.show();
    }
}

public class P16 {
    public static void main(String[] args) {
        B obj = new B();
        obj.run();
    }
}
