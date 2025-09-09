package com.simple;

class Student {
    // Static variable (shared by all objects)
    static int totalStudent = 0;
    String name;

    Student(String name) {
        this.name = name;
        totalStudent++; 
    }

    // Static method to display total students
    static void displayTotalStudents() {
        System.out.println("Total Students: " + totalStudent);
    }

    // Instance method
    void displayDetails() {
        System.out.println("Student Name: " + name);
    }
}

public class staticVarClass {
    public static void main(String[] args) {
        // Create Student objects
        Student s1 = new Student("Pratham");
        Student s2 = new Student("Pruthava");
        Student s3 = new Student("Yami");

                
        s1.displayDetails();
        s2.displayDetails();
        s3.displayDetails();

        // Access static method using class name
        Student.displayTotalStudents();
    }
}