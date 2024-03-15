interface P1 {
    int CONSTANT_P1 = 42;
    void methodP1();
}

interface P2 {
    int CONSTANT_P2 = 23;
    void methodP2();
}

class Q implements P1, P2 {
    public void methodP1() {
        System.out.println("displaying CONSTANT_P1: " + CONSTANT_P1);
    }

    public void methodP2() {
        System.out.println("displaying CONSTANT_P2: " + CONSTANT_P2);
    }
}

public class P19 {
    public static void main(String[] args) {

        Q q = new Q();

        q.methodP1();
        q.methodP2();
    }
}