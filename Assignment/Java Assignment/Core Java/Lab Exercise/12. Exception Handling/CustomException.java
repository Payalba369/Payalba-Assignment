package Assignment;

import java.util.Scanner;

//Custom exception 
class AgeException extends Exception {
public AgeException(String message) {
   super(message); // Pass message 
}
}

public class CustomException {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter your age: ");
        int age = sc.nextInt();

        try {
            if (age < 18) {
                throw new AgeException("Age must be 18 or above!");
            }
            System.out.println("You are eligible.");
        } 
        catch (AgeException e) {
            System.out.println("Custom Exception Caught: " + e.getMessage());
        } 

    }
}
