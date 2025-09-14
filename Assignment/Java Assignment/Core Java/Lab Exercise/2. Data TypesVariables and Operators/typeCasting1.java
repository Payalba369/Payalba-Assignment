
package com.simple;


public class typeCasting1 {

	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 // -------- IMPLICIT CASTING (Widening) --------
        int intNum = 100;
        double doubleNum = intNum; // int  to double

        System.out.println("Implicit Casting:");
        System.out.println("Integer value: " + intNum);
        System.out.println("Converted to double: " + doubleNum);

        // -------- First example EXPLICIT CASTING (Narrowing) --------
        double pi = 3.14159;
        int approxPi = (int) pi; // manually  converted  double  to int

        System.out.println("\nFirst Example of Explicit Casting:");
        System.out.println("Double value: " + pi);
        System.out.println("Converted to int: " + approxPi);

        // Second Example of
        long bigNumber = 8876543210L;
        int smallNumber = (int) bigNumber; // narrowing,  possible to loss data

        System.out.println("\nSecond Example of Explicit Casting Example:");
        System.out.println("Long value: " + bigNumber);
        System.out.println("Converted to int: " + smallNumber);

	}

}
