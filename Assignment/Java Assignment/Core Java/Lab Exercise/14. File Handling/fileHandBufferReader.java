package Assignment;


import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class fileHandBufferReader {
    public static void main(String[] args) {
        String fileName = "fileHand.txt"; // File to read

        try (BufferedReader br = new BufferedReader(new FileReader(fileName))) {
            String line;
            System.out.println("📖 Reading file content line by line:");
            while ((line = br.readLine()) != null) {
                System.out.println(line); // print each line
            }
        } catch (IOException e) {
            System.out.println("❌ Error reading file: " + e.getMessage());
        }
    }
}
