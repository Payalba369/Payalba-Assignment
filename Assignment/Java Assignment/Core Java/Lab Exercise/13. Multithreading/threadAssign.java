package Assignment;


// Thread class
class MyThread extends Thread {
 private String threadName;

 // Constructor
 public MyThread(String name) {
     this.threadName = name;
 }

 // run() method
 public void run() {
     for (int i = 1; i <= 5; i++) {
         System.out.println(threadName + " - Count: " + i);
         try {
             Thread.sleep(500); // Pause for 500ms
         } catch (InterruptedException e) {
             System.out.println(threadName + " interrupted.");
         }
     }
     System.out.println(threadName + " has finished execution.");
 }
}

public class threadAssign {
 public static void main(String[] args) {
     // Create multiple threads
     MyThread t1 = new MyThread("Thread-1");
     MyThread t2 = new MyThread("Thread-2");
     MyThread t3 = new MyThread("Thread-3");

     // Start the threads
     t1.start();
     t2.start();
     t3.start();

     System.out.println("Main thread finish and starting other threads.");
 }
}
