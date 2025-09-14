package Assignment;

import java.util.Scanner;

public class MultipleCatchAssign {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            // Input two numbers
            System.out.println("Enter numerator: ");
            int numerator = sc.nextInt();

            System.out.println("Enter denominator: ");
            int denominator = sc.nextInt();

            int result = numerator / denominator;
            System.out.println("Result: " + result);

            // Accessing an array element may throw ArrayIndexOutOfBoundsException
            int[] arr = {1, 2, 3};
            System.out.println("Accessing 5th element: " + arr[4]);
        }
        catch (ArithmeticException e) {
            System.out.println("Error: Cannot divide by zero!");
        }
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: Array index out of bounds!");
        }
        catch (Exception e) {
            System.out.println("Error: Something went wrong!");
        }
       
    }
}
