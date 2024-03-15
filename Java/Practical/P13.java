import java.io.*;

public class P13 {
    public static void main(String[] args) {
        try {
            File file = new File("P13.txt");
            
            if (!file.exists()) {
                file.createNewFile();
                System.out.println("File created Successfully.");
            }

            FileOutputStream f_write = new FileOutputStream(file);
            String name = "Jeet";
            byte b[] = name.getBytes();
            f_write.write(b);
            f_write.close();
            System.out.println("Writing Complete!");

            FileInputStream f_read = new FileInputStream(file);
            int i;
            while ((i = f_read.read()) != -1) {
                System.out.print((char) i);
            }
            f_read.close();
        } catch (IOException e) {
            System.out.println("I/O Occurs Wrong");
        }
    }
}
