public class wrapper {
    public static void main(String[] args) {
        
        // Wrapping int into Integer
        int num = 42;
        Integer wrappedInt = Integer.valueOf(num);
        
        // Wrapping double into Double
        double pi = 3.14159;
        Double wrappedDouble = pi;
        
        // Wrapping char into Character
        char letter = 'A';
        Character wrappedChar = Character.valueOf(letter);
        
        // Auto-boxing: You can also use the short syntax to wrap primitives automatically
        boolean flag = true;
        Boolean wrappedBoolean = flag;
        
        // Unboxing: Extracting the primitive value from the wrapper object
        int unwrappedInt = wrappedInt.intValue();
        double unwrappedDouble = wrappedDouble.doubleValue();
        char unwrappedChar = wrappedChar.charValue();
        boolean unwrappedBoolean = wrappedBoolean.booleanValue();
        
        System.out.println("Wrapped Integer: " + wrappedInt);
        System.out.println("Wrapped Double: " + wrappedDouble);
        System.out.println("Wrapped Character: " + wrappedChar);
        System.out.println("Wrapped Boolean: " + wrappedBoolean);
        
        System.out.println("Unwrapped Integer: " + unwrappedInt);
        System.out.println("Unwrapped Double: " + unwrappedDouble);
        System.out.println("Unwrapped Character: " + unwrappedChar);
        System.out.println("Unwrapped Boolean: " + unwrappedBoolean);
        
    }
}