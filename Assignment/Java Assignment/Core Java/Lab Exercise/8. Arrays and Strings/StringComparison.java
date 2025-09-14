package Assignment;

import java.util.Scanner;

public class StringComparison {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input two strings
        System.out.print("Enter first string: ");
        String str1 = sc.nextLine();

        System.out.print("Enter second string: ");
        String str2 = sc.nextLine();

        // Using equals() method (case-sensitive)
        if (str1.equals(str2)) {
            System.out.println("Using equals(): Strings are EQUAL");
        } else {
            System.out.println("Using equals(): Strings are NOT EQUAL");
        }

        // Using compareTo() method
        int result = str1.compareTo(str2);
        if (result == 0) {
            System.out.println("Using compareTo(): Strings are EQUAL");
        } else if (result > 0) {
            System.out.println("Using compareTo(): First string is GREATER than second");
        } else {
            System.out.println("Using compareTo(): First string is LESS than second");
        }

        sc.close();
    }
}