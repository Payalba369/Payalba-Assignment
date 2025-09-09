package Assignment;

//Parent class (Superclass)
class Fruit {
 String name;
 String color;

 // Constructor
 Fruit(String name, String color) {
     this.name = name;
     this.color = color;
 }

 // Method in parent class
 void display() {
     System.out.println("Fruit: " + name);
     System.out.println("Color: " + color);
 }
}

//Child class (Subclass) 
class Apple extends Fruit {
 String taste;

 // Constructor
 Apple(String name, String color, String taste) {
     super(name, color); // Call parent constructor
     this.taste = taste;
 }

 // Method specific to Apple
 void showTaste() {
     System.out.println("Taste: " + taste);
 }
}

//Another child class
class Banana extends Fruit {
 boolean isRipe;

 // Constructor
 Banana(String name, String color, boolean isRipe) {
     super(name, color);
     this.isRipe = isRipe;
 }

 // Method specific to Banana
 void checkRipeness() {
     if (isRipe) {
         System.out.println(name + " is ripe.");
     } else {
         System.out.println(name + " is not ripe.");
     }
 }
}

//Main class
public class inheritanceExtends {
 public static void main(String[] args) {
     // Create Apple object
     Apple apple = new Apple("Apple", "Red", "Sweet");
     apple.display();    // Parent class method
     apple.showTaste();  // Child class method
     System.out.println();

     // Create Banana object
     Banana banana = new Banana("Banana", "Yellow", true);
     banana.display();        // Parent class method
     banana.checkRipeness();  // Child class method
 }
}