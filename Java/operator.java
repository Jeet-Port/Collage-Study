public class operator {
    public static void main(String[] args) {
        int a = 20, b = 10;
        
        System.out.println("---------- Arithmetic ----------");
        System.out.printf("a = %d , b = %d\n",a,b);
        System.out.println("Add = "+(a+b));
        System.out.println("Sub = "+(a-b));
        System.out.println("Mul = "+(a*b));
        System.out.println("Div = "+(a/b));
        System.out.println("Mod = "+(a%b));

        System.out.println("\n---------- Inc / Dec ----------");
        System.out.printf("a = %d , b = %d\n",a,b);
        System.out.println("Pre inc = "+(++a));
        System.out.println("Pre Dec = "+(--b));
        System.out.println("Post Inc = "+(a++));
        System.out.println("Post Dec = "+(b--));

        System.out.println("\n---------- Conditional ----------");
        System.out.printf("a = %d , b = %d\n",a,b);
        System.out.println("if (a>b) True = "+((a>b)?a:b));
        System.out.println("if (a<b) False = "+((a<b)?a:b));

        System.out.println("\n---------- Relational ----------");
        System.out.printf("a = %d , b = %d\n",a,b);
        System.out.println("if a>b = "+(a>b));
        System.out.println("if a<b = "+(a<b));
        System.out.println("if a == b "+(a==b));
        System.out.println("if a!=b = "+(a!=b));
        System.out.println("if a>=b = "+(a>=b));
        System.out.println("if a=<b = "+(a<=b));

        System.out.println("\n---------- Assignment ----------");
        System.out.printf("a = %d , b = %d\n",a,b);
        System.out.println("if a = 23 , a = "+(a = 23));
        System.out.println("if a+=2 = "+(a+=2));
        System.out.println("if a-=2 = "+(a-=2));
        System.out.println("if a*=2 = "+(a*=2));
        System.out.println("if a/=2 = "+(a/=2));
        System.out.println("if a%=2 = "+(a%=2));

        System.out.println("\n---------- Logical ----------");
        System.out.printf("a = %d , b = %d\n",a,b);
        System.out.println("if (a>b && a==b) = "+((a>b && a==b)?a:b));
        System.out.println("if (a>b || a==b) = "+((a<b || a==b)?a:b));
        System.out.println("if (!(a<b)?a:b) = "+(!(a<b)?a:b));

        System.out.println("\n---------- Bitwise ----------");
        System.out.println("(5 & 7) = "+(5 & 7));
        System.out.println("(5 | 7) = "+(5 | 7));
        System.out.println("(5 ^ 7) = "+(5 ^ 7));
        System.out.println("(~ 7) = "+(~ 7));
        System.out.println("(5 << 1) = "+(5 << 1));
        System.out.println("(5 >> 1) = "+(5 >> 1));
        System.out.println("(5 >>> 1) = "+(5 >>> 1));
    }
}