package Assignment;


import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class collFrameHashMap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Create a HashMap 
        Map<Integer, String> studentMap = new HashMap<>();

        System.out.print("Enter number of students: ");
        int n = sc.nextInt();
        sc.nextLine(); 

        // Add key-value pairs
        for (int i = 0; i < n; i++) {
            System.out.print("Enter student ID: ");
            int id = sc.nextInt();
            sc.nextLine(); 
            System.out.print("Enter student Name: ");
            String name = sc.nextLine();

            studentMap.put(id, name);
        }

        // Display all entries
        System.out.println("\nAll Students in HashMap:");
        for (Map.Entry<Integer, String> entry : studentMap.entrySet()) {
            System.out.println("ID: " + entry.getKey() + " -> Name: " + entry.getValue());
        }

        // Retrieve value by key
        System.out.print("\nEnter student ID to search: ");
        int searchId = sc.nextInt();
        if (studentMap.containsKey(searchId)) {
            System.out.println("Student found: " + studentMap.get(searchId));
        } else {
            System.out.println("Student with ID " + searchId + " not found.");
        }

        sc.close();
    }
}
