package Assignment;

class Stud {
 String name;
 int age;

 // Parameterized constructor
 Stud(String name, int age) {
     this.name = name;
     this.age = age;
 }

 void display() {
     System.out.println("Name: " + name);
     System.out.println("Age: " + age);
 }
}

//Main class
public class ParameterizedConstructor {
 public static void main(String[] args) {
    
     Stud s1 = new Stud("Payal", 30);
     Stud s2 = new Stud("Yami", 7);


     s1.display();
     System.out.println(); 
     s2.display();
 }
}