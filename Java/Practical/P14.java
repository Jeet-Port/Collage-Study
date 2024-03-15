class  A{
    void show(){
        System.out.println("Single inheritance");
    }
}
class B extends A{
    void run(){
        System.out.println("Running");
    }
}

class c{
    void show(){
        System.out.println("Multilevel Inheritance");
    }
}
class D extends c{
    void display(){
        System.out.println("Displaying");
    }
}
class E extends D{
    void run(){
        System.out.println("Running");
    }
}

class F{
    void show(){
        System.out.println("Hierarchical inheritance");
    }
}
class G extends F{
    void display(){
        System.out.println("Displaying");
    }
}
class H extends F{
    void run(){
        System.out.println("Running");
    }
}

public class P14 {
    public static void main(String[] args) {
        B singleInheritance = new B();
        singleInheritance.run();
        singleInheritance.show();

        System.out.println();

        E multilevelInheritance = new E();
        multilevelInheritance.run();
        multilevelInheritance.display();
        multilevelInheritance.show();;

        System.out.println();

        G hierarchicalObj1 = new G();
        hierarchicalObj1.show();
        H hierarchicalObj2 = new H();
        hierarchicalObj2.show();
    }
    
}