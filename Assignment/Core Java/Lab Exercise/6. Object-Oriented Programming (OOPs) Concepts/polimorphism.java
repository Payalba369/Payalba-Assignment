package Assignment;

//Parent class
class Animal {
 void sound() {
     System.out.println("Animals make a sound.");
 }
}

//Child class 1
class Dog extends Animal {
 @Override
 void sound() {
     System.out.println("Dog barks.");
 }
}

//Child class 2
class Cat extends Animal {
 @Override
 void sound() {
     System.out.println("Cat meows.");
 }
}

//Main class
public class polimorphism  {
 public static void main(String[] args) {
     
     Animal a;

     a = new Dog();  
     a.sound();     

     a = new Cat();  
     a.sound();     

     a = new Animal(); 
     a.sound();       
 }
}
