package Assignment;


import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class javaIOFileStream {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter source file path: ");
        String sourcePath = sc.nextLine();

        System.out.print("Enter destination file path: ");
        String destPath = sc.nextLine();

        FileInputStream fis = null;
        FileOutputStream fos = null;

        try {
            // Open source file for reading
            fis = new FileInputStream(sourcePath);

            // Open destination file for writing
            fos = new FileOutputStream(destPath);

            int byteData;
            while ((byteData = fis.read()) != -1) {
                fos.write(byteData);  // Write each byte
            }

            System.out.println("File copied successfully!");

        } catch (IOException e) {
            System.out.println("Error occurred: " + e.getMessage());
        } finally {
            // Close resources
            try {
                if (fis != null) fis.close();
                if (fos != null) fos.close();
            } catch (IOException e) {
                System.out.println("Error closing file streams.");
            }
        }

        sc.close();
    }
}
