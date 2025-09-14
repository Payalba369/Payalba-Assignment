package com.simple;
import java.util.Scanner;

public class menuSwitch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int choice;
        
        do {
            System.out.println("\n===== Simple Calculator Menu =====");
            System.out.println("1. Addition");
            System.out.println("2. Subtraction");
            System.out.println("3. Multiplication");
            System.out.println("4. Division");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();
            
            switch(choice) {
                case 1:
                    System.out.print("Enter two numbers: ");
                    int a1 = sc.nextInt();
                    int b1 = sc.nextInt();
                    System.out.println("Result = " + (a1 + b1));
                    break;

                case 2:
                    System.out.print("Enter two numbers: ");
                    int a2 = sc.nextInt();
                    int b2 = sc.nextInt();
                    System.out.println("Result = " + (a2 - b2));
                    break;

                case 3:
                    System.out.print("Enter two numbers: ");
                    int a3 = sc.nextInt();
                    int b3 = sc.nextInt();
                    System.out.println("Result = " + (a3 * b3));
                    break;

                case 4:
                    System.out.print("Enter two numbers: ");
                    int a4 = sc.nextInt();
                    int b4 = sc.nextInt();
                    if(b4 != 0) {
                        System.out.println("Result = " + (a4 / b4));
                    } else {
                        System.out.println("Error: Division by zero!");
                    }
                    break;

                case 5:
                    System.out.println("Exiting... Thank you!");
                    break;

                default:
                    System.out.println("Invalid choice! Please try again.");
            }
        } while(choice != 5);

        sc.close();
    }
}