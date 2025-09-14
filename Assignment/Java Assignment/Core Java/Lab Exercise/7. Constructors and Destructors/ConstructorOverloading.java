package Assignment;

class Stud1 {
    String name;
    int age;
    double marks;

    // Default constructor
    Stud1() {
        name = "Unknown";
        age = 0;
        marks = 0.0;
    }

    // Constructor with one parameter (String)
    Stud1(String n) {
        name = n;
        age = 0;
        marks = 0.0;
    }

    // Constructor with two parameters (String, int)
    Stud1(String n, int a) {
        name = n;
        age = a;
        marks = 0.0;
    }

    // Constructor with three parameters (String, int, double)
    Stud1(String n, int a, double m) {
        name = n;
        age = a;
        marks = m;
    }

    // Method to display student details
    void display() {
        System.out.println("Name: " + name + ", Age: " + age + ", Marks: " + marks);
    }
}

public class ConstructorOverloading {
    public static void main(String[] args) {
        // Using different constructors
    	Stud1 s1 = new Stud1();                 // default constructor
    	Stud1 s2 = new Stud1("Yami");          // 1-param constructor
    	Stud1 s3 = new Stud1("Pruthava", 22);      // 2-param constructor
    	Stud1 s4 = new Stud1("Pratham", 20, 85.5);// 3-param constructor

        // Display details
        s1.display();
        s2.display();
        s3.display();
        s4.display();
    }
}