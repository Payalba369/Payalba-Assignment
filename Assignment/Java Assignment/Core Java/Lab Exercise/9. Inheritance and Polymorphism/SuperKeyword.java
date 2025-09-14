package Assignment;

//Parent class
class Vehicle {
 String brand;

 // Parent class constructor
 Vehicle(String brand) {
     this.brand = brand;
 }

 // Parent class method
 void displayBrand() {
     System.out.println("Vehicle brand: " + brand);
 }
}

//Child class
class Car extends Vehicle {
 String model;

 // Child class constructor
 Car(String brand, String model) {
     super(brand); 
     this.model = model;
 }

 // Child class method
 void displayDetails() {
     super.displayBrand(); 
     System.out.println("Car model: " + model);
 }
}

//Main class
public class SuperKeyword {
 public static void main(String[] args) {
     Car myCar = new Car("Toyota", "Innova");
     myCar.displayDetails();
 }
}