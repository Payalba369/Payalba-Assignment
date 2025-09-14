package Assignment;

//First interface
interface Printable {
 void print(); // abstract method
}

//Second interface
interface Showable {
 void show(); // abstract method
}

//Class implementing multiple interfaces
class Document implements Printable, Showable {
 String title;

 // Constructor
 Document(String title) {
     this.title = title;
 }

 // Implement print() from Printable
 @Override
 public void print() {
     System.out.println("Printing document: " + title);
 }

 // Implement show() from Showable
 @Override
 public void show() {
     System.out.println("Showing document: " + title);
 }
}

//Main class
public class MultipleInterface {
 public static void main(String[] args) {
     
     Document doc = new Document("YAMI DESAI");

     // Call methods from both interfaces
     doc.print();
     doc.show();
 }
}
