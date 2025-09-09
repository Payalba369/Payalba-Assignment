package Assignment;
//Parent class
class Animal {
 void sound() {
     System.out.println("Animal makes a sound");
 }
}

//Child class 1
class Dog extends Animal {
 @Override
 void sound() {
     System.out.println("Dog barks");
 }
}

//Child class 2
class Cat extends Animal {
 @Override
 void sound() {
     System.out.println("Cat meows");
 }
}

//Main class
public class runtimePolimorphism{
 public static void main(String[] args) {
     Animal myAnimal;

     // Parent reference  to Dog 
     myAnimal = new Dog();
     myAnimal.sound(); // Dog's sound() at runtime

     // Parent reference  to Cat 
     myAnimal = new Cat();
     myAnimal.sound(); // Cat's sound() at runtime

     // Parent reference to Animal
     myAnimal = new Animal();
     myAnimal.sound(); // Animal's sound()
 }
}




