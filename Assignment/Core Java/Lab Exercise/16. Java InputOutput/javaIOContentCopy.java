package Assignment;


import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class javaIOContentCopy {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter source file path: ");
        String sourcePath = sc.nextLine();

        System.out.print("Enter destination file path: ");
        String destPath = sc.nextLine();

        FileReader fr = null;
        FileWriter fw = null;

        try {
            // Open source file for reading
            fr = new FileReader(sourcePath);

            // Open destination file for writing
            fw = new FileWriter(destPath);

            int character;
            while ((character = fr.read()) != -1) {
                fw.write(character);  
            }

            System.out.println("File copied successfully!");

        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            try {
                if (fr != null) fr.close();
                if (fw != null) fw.close();
            } catch (IOException e) {
                System.out.println("Error closing files.");
            }
        }

        sc.close();
    }
}
