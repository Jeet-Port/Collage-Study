final public class P17 {

    final int var = 11;

    public static void main(String[] args) {
        P17 obj = new P17();
        obj.run();
        System.out.println(obj.var);
    }

    final void run(){
        System.out.println("Running");
    }
}