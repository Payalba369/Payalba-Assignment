package com.simple;
import java.util.Scanner;
class Student1 {
 private String name;
 private int age;

 // Getter for name
 public String getName() {
     return name;
 }

 // Setter for name
 public void setName(String name) {
     this.name = name;
 }

 // Getter for age
 public int getAge() {
     return age;
 }

 // Setter for age
 public void setAge(int age) {
     if (age > 0) {  // validation to prevent invalid data
         this.age = age;
     } else {
         System.out.println("Age is invaalid");
     }
 }
}

//Driver class
public class getSetEncap {
 public static void main(String[] args) {
	 Scanner sc = new Scanner(System.in);

     // Create Student object
     Student1 s1 = new Student1();

     // Set values using setters by user
     System.out.println("Enter Student name");
     String name = sc.nextLine();
     s1.setName(name);
     
     System.out.println("Enter age of the Student");
     int age = sc.nextInt();
     s1.setAge(age);

     // Access values using getters
     System.out.println("Student Name: " + s1.getName());
     System.out.println("Student Age: " + s1.getAge());

 }
}