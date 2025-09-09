package Assignment;

//Base class
class Person1 {
 String name;
 int age;

 void displayPerson() {
     System.out.println("Name: " + name);
     System.out.println("Age: " + age);
 }
}

//Derived class
class Student1 extends Person1 {
 String course;

 void displayStudent() {
     displayPerson(); // reuse parent method
     System.out.println("Course: " + course);
 }
}

//Derived class 
class GraduateStudent extends Student1 {
 String specialization;

 void displayGraduateStudent() {
     displayStudent(); // reuse Student method
     System.out.println("Specialization: " + specialization);
 }
}

//Main class
public class multilevelInheritance {
 public static void main(String[] args) {
   
     GraduateStudent gs = new GraduateStudent();

     // Assign values 
     gs.name = "Anita";               
     gs.age = 24;                      
     gs.course = "Computer Science";   
     gs.specialization = "Designing"; 


     gs.displayGraduateStudent();
 }
}