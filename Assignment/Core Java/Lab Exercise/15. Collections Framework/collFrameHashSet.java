package Assignment;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

public class collFrameHashSet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // input list from user
        List<String> list = new ArrayList<>();
        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();
        sc.nextLine(); 

        for (int i = 0; i < n; i++) {
            System.out.print("Enter element " + (i + 1) + ": ");
            list.add(sc.nextLine());
        }

        System.out.println("\nOriginal List : " + list);

        // HashSet to remove duplicates
        Set<String> set = new HashSet<>(list);

       
        List<String> uniqueList = new ArrayList<>(set);

        System.out.println("List after removing duplicates: " + uniqueList);

        sc.close();
    }
}
