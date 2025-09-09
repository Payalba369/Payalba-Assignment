package Assignment;

//Abstract class
abstract class Shape {
 String color;

 // Constructor
 Shape(String color) {
     this.color = color;
 }

 // Abstract method
 abstract double area();

 
 void displayColor() {
     System.out.println("Color: " + color);
 }
}

//Subclass Circle
class Circle extends Shape {
 double radius;

 // Constructor circle
 Circle(String color, double radius) {
     super(color); // Call parent constructor
     this.radius = radius;
 }

 //abstract method circle
 @Override
 double area() {
     return Math.PI * radius * radius;
 }
}

//Subclass Rectangle
class Rectangle extends Shape {
 double length, width;

 // Constructor ectangle
 Rectangle(String color, double length, double width) {
     super(color);
     this.length = length;
     this.width = width;
 }

 // abstract method ectangle
 @Override
 double area() {
     return length * width;
 }
}

//Main class
public class AbstractClass {
 public static void main(String[] args) {
     // Create objects of subclasses
     Circle c = new Circle("Red", 5);
     Rectangle r = new Rectangle("Blue", 4, 6);

     // Display details
     System.out.println("Circle:");
     c.displayColor();
     System.out.println("Area: " + c.area() + "\n");

     System.out.println("Rectangle:");
     r.displayColor();
     System.out.println("Area: " + r.area());
 }
}
