package com.simple;

class Stu {
    String name;
    int age;

    // Parameterized constructor
    Stu(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void displayDetails() {
        System.out.println("Student Name: " + name);
        System.out.println("Student Age: " + age);
    }
}


public class StudentDemo {
    public static void main(String[] args) {
        Stu s1 = new Stu("Yami", 7);
        Stu s2 = new Stu("Pruthava", 11);

        s1.displayDetails();
        System.out.println();
        s2.displayDetails();
    }
}
