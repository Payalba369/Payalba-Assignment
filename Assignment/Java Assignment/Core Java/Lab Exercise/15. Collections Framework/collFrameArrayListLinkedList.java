package Assignment;


import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class collFrameArrayListLinkedList {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Using ArrayList for fruits
        List<String> arrayList = new ArrayList<>();
        System.out.print("Enter number of fruits: ");
        int n = sc.nextInt();
        sc.nextLine(); // consume newline
        for (int i = 0; i < n; i++) {
            System.out.print("Enter fruit " + (i + 1) + ": ");
            arrayList.add(sc.nextLine());
        }

        System.out.println("\nArrayList Elements: " + arrayList);

        // Remove a fruit
        System.out.print("Enter fruit to remove from ArrayList: ");
        String fruitToRemove = sc.nextLine();
        arrayList.remove(fruitToRemove);
        System.out.println("ArrayList after removing '" + fruitToRemove + "': " + arrayList);

        // Add fruit at specific index
        System.out.print("Enter fruit to insert in ArrayList: ");
        String newFruit = sc.nextLine();
        System.out.print("Enter index (0 to " + arrayList.size() + "): ");
        int indexFruit = sc.nextInt();
        sc.nextLine(); // consume newline
        if (indexFruit >= 0 && indexFruit <= arrayList.size()) {
            arrayList.add(indexFruit, newFruit);
        } else {
            System.out.println("Invalid index, fruit not added.");
        }
        System.out.println("ArrayList after insertion: " + arrayList);

        // Using LinkedList for vehicles
        LinkedList<String> linkedList = new LinkedList<>();
        System.out.print("\nEnter number of vehicles: ");
        int m = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < m; i++) {
            System.out.print("Enter vehicle " + (i + 1) + ": ");
            linkedList.add(sc.nextLine());
        }

        System.out.println("\nLinkedList Elements: " + linkedList);

        // Remove by index
        System.out.print("Enter index of vehicle to remove (0 to " + (linkedList.size() - 1) + "): ");
        int removeIndex = sc.nextInt();
        sc.nextLine();
        if (removeIndex >= 0 && removeIndex < linkedList.size()) {
            linkedList.remove(removeIndex);
        } else {
            System.out.println("Invalid index, no vehicle removed.");
        }
        System.out.println("LinkedList after removal: " + linkedList);

        // Add at first and last
        System.out.print("Enter vehicle to add at FIRST position: ");
        String firstVehicle = sc.nextLine();
        linkedList.addFirst(firstVehicle);

        System.out.print("Enter vehicle to add at LAST position: ");
        String lastVehicle = sc.nextLine();
        linkedList.addLast(lastVehicle);

        System.out.println("LinkedList after adding first and last: " + linkedList);

        sc.close();
    }
}
