package Assignment;

import java.io.*;

//Step 1: Create a class that implements Serializable
class StudentP implements Serializable 
{
	 private static final long serialVersionUID = 1L; 
	
	 private int id;
	 private String name;
	 private String course;
	
	 public StudentP(int id, String name, String course) 
	 {
	     this.id = id;
	     this.name = name;
	     this.course = course;
	 }

 @Override
 public String toString() {
     return "StudentP [ID=" + id + ", Name=" + name + ", Course=" + course + "]";
 }
}

public class fileHandSerializationDeserialization 
{
 public static void main(String[] args) 
 {
     String fileName = "student.ser";

     // Step 2: Serialize (write object to file)
     StudentP s1 = new StudentP(101, "Payal", "Java full stack");
     try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(fileName))) 
     {
         oos.writeObject(s1);
         System.out.println("✅ Serialization done. Object written to " + fileName);
     } 
     catch (IOException e) 
     {
         System.out.println("❌ Error during serialization: " + e.getMessage());
     }

     // Step 3: Deserialize 
     try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(fileName))) 
     {
         StudentP s2 = (StudentP) ois.readObject();
         System.out.println("📖 Deserialization done. Object read from file:");
         System.out.println(s2);
     } 
     catch (IOException | ClassNotFoundException e) 
     {
         System.out.println("❌ Error during deserialization: " + e.getMessage());
     }
 }
}
