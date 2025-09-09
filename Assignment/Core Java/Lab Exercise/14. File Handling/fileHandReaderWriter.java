package Assignment;


import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class fileHandReaderWriter {
    public static void main(String[] args) {
        String fileName = "fileHand.txt";

        // -------- Writing to file --------
        try (FileWriter writer = new FileWriter(fileName)) {
            writer.write(" File Handling Assignment.\n");
            writer.write(" Assignment of FileWriter.\n");
            writer.write("FileWriter used to write character data.");
            System.out.println("✅ Data successfully written to " + fileName);
        } catch (IOException e) {
            System.out.println("❌ Error while writing: " + e.getMessage());
        }

        // -------- Reading from file --------
        try (FileReader reader = new FileReader(fileName)) {
            int ch;
            System.out.println("\n📖 Reading file content:");
            while ((ch = reader.read()) != -1) {
                System.out.print((char) ch); // convert int to char
            }
        } catch (IOException e) {
            System.out.println("❌ Error while reading: " + e.getMessage());
        }
    }
}
