package com.simple;

//Student class
class Std1 {
 String name;
 int age;

 // Constructor 1: No parameters
 Std1() {
     name = "Unknown";
     age = 0;
 }

 // Constructor 2: One parameter
 Std1(String name) {
     this.name = name;
     age = 0;
 }

 // Constructor 3: Two parameters
 Std1(String name, int age) {
     this.name = name;
     this.age = age;
 }

 // Method to display student details
 void displayDetails() {
     System.out.println("Student Name: " + name);
     System.out.println("Student Age: " + age);
 }
}

//Main class
public class consOverloading {
 public static void main(String[] args) {
     // Using default constructor
	 Std1 s1 = new Std1();

     // Using constructor with 1 parameter
	 Std1 s2 = new Std1("Yami");

     // Using constructor with 2 parameters
	 Std1 s3 = new Std1("Pruthava", 11);

     // Display details of all students
     s1.displayDetails();
     System.out.println();
     s2.displayDetails();
     System.out.println();
     s3.displayDetails();
 }
}