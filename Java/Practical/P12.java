public class P12 {
    public static void main(String[] args) {

        P12 obj = new P12();
        obj.noDatatypeNoArgument();
        obj.noDatatypeWithArgument(10);
        obj.datatypeNoArgument();
        obj.datatypeWithArgument(50);
        
    }
    public void noDatatypeNoArgument(){
        System.out.println("This Method is known as No-Datatype - No-Argument");
    }

    public void noDatatypeWithArgument(int a){
        System.out.println("This Method Type is known as No-Datatype - With-Argument");
        System.out.println("As An Argument we used a = "+a);
    }

    public int datatypeNoArgument(){
        System.out.println("We are returning ");
        return 10;
    }

    public int datatypeWithArgument(int a){
        System.out.println("We are returning value of an argument that user have entered");
        return a;
    }
}