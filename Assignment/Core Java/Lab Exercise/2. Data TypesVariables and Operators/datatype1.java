package com.simple;

public class odatatype1 {
    public static void main(String[] args) {
        
        // Integer types
        byte b = 100;          
        short s = 10000;       
        int i = 100000;       
        long l = 10000000000L; 

        // Floating-point types
        float f = 3.14f;       
        double d = 3.14159265359; 

        // Character type
        char c = 'A';         

        // Boolean type
        boolean isJavaFun = true;

        // Non-primitive types
        String str = "Hello, Java";
        int[] numbers = {1, 2, 3, 4, 5}; 
        
        // Printing values
        System.out.println("Byte value: " + b);
        System.out.println("Short value: " + s);
        System.out.println("Int value: " + i);
        System.out.println("Long value: " + l);
        System.out.println("Float value: " + f);
        System.out.println("Double value: " + d);
        System.out.println("Char value: " + c);
        System.out.println("Boolean value: " + isJavaFun);
        System.out.println("String value: " + str);

        System.out.print("Array values: ");
        for (int num : numbers) {
            System.out.print(num + " ");
        }
    }
}
