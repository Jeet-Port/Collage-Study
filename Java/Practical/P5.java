public class P5 {
    public static void main(String[] args) {

        Byte byteObj = Byte.valueOf((byte) 10);
        System.out.println("Byte: " + byteObj);

        Short shortObj = Short.valueOf((short) 100);
        System.out.println("Short: " + shortObj);

        Integer intObj = Integer.valueOf(1000);
        System.out.println("Integer: " + intObj);

        Long longObj = Long.valueOf(100000L);
        System.out.println("Long: " + longObj);

        Float floatObj = Float.valueOf(3.14f);
        System.out.println("Float: " + floatObj);

        Double doubleObj = Double.valueOf(2.718);
        System.out.println("Double: " + doubleObj);

        Character charObj = Character.valueOf('A');
        System.out.println("Character: " + charObj);

        Boolean boolObj = Boolean.valueOf(true);
        System.out.println("Boolean: " + boolObj);
    }
}
