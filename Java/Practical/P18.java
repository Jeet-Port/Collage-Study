abstract class A {
    abstract void test();

    void run(){
        System.out.println("Done");
    }
}
class B extends A{
    void test(){
        System.out.println("Running");
    }
    
}

public class P18 {
    public static void main(String[] args) {
        B obj = new B();
        obj.test();
    }
}
