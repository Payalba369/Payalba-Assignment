package Assignment;

import java.util.Scanner;

public class ExceptionAssign {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.println("Enter numerator: ");
            int numerator = sc.nextInt();

            System.out.println("Enter denominator: ");
            int denominator = sc.nextInt();

            // This may cause ArithmeticException if denominator is 0
            int result = numerator / denominator;
            System.out.println("Result: " + result);
        }
        catch (ArithmeticException e) {
            System.out.println("Error: Cannot divide by zero!");
        }
        catch (Exception e) {
            System.out.println("Error: Invalid input!");
        }

    }
}
