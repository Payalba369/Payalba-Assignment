package Assignment;
import java.util.Scanner;

public class javaIOScanner {
	 public static void main(String[] args) {
	        // to read input
	        Scanner sc = new Scanner(System.in);

	        // Reading a string
	        System.out.print("Enter your name: ");
	        String name = sc.nextLine();

	        // Reading an integer
	        System.out.print("Enter your age: ");
	        int age = sc.nextInt();


	        // Displaying the input
	        System.out.println("\n--- User Details ---");
	        System.out.println("Name   : " + name);
	        System.out.println("Age    : " + age);
	       

	        sc.close(); // Close scanner
	    }
}


