package Assignment;

//Parent class
class Person {
 String name;
 int age;

 void displayPerson() {
     System.out.println("Name: " + name);
     System.out.println("Age: " + age);
 }
}

//Child class 
class Student extends Person {
 String course;

 void displayStudent() {
    
     displayPerson();
     System.out.println("Course: " + course);
 }
}

//Main class
public class inheritance1{
 public static void main(String[] args) {
     // Create Student object
     Student s1 = new Student();

     // Assign values (inherited + own)
     s1.name = "Payal";   
     s1.age = 30;         
     s1.course = "Full Stack Java";  

     // Display details
     s1.displayStudent();
 }
}