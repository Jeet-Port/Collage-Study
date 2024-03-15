public class types_of_variable {
    static int sta_var = 10;
    int glo_var = 20;

    public static void main(String[] args) {
        types_of_variable obj = new types_of_variable();
        
        int loc_var = 30;
        
        System.out.println("Local var = "+loc_var);
        System.out.println("Static var = "+sta_var);
        
        
        obj.value();;
        
    }
    public void value(){
        System.out.println("Instance var = "+glo_var);
    }
    
}