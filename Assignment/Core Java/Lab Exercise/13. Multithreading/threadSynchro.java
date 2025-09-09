package Assignment;

//Program to demonstrate thread synchronization using synchronized methods & blocks

class Counter {
 private int count = 0;

 // ❌ Without synchronization 
 public void incrementWithoutSync(String threadName) 
 {
     for (int i = 1; i <= 5; i++) 
     {
         count++;
         System.out.println(threadName + " (No Sync) -> Count: " + count);
         try { Thread.sleep(100); } catch (InterruptedException e) { e.printStackTrace(); }
     }
 }

 // ✅ Synchronized method
 public synchronized void incrementWithMethod(String threadName) 
 {
     for (int i = 1; i <= 5; i++) 
     {
         count++;
         System.out.println(threadName + " (Sync Method) -> Count: " + count);
         try { Thread.sleep(100); } catch (InterruptedException e) { e.printStackTrace(); }
     }
 }

 // ✅ Synchronized block
 public void incrementWithBlock(String threadName) 
 {
     synchronized (this) 
     {
         for (int i = 1; i <= 5; i++) 
         {
             count++;
             System.out.println(threadName + " (Sync Block) -> Count: " + count);
             try {
            	 Thread.sleep(100); 
            	 } catch (InterruptedException e) 
             		{
            		 e.printStackTrace(); 
            		}
         }
     }
 }
}

//Worker thread class
class thread2 extends Thread 
		{
		 private Counter counter;
		 private String threadName;
		 private String mode; 
		
		 public thread2(Counter counter, String threadName, String mode) {
		     this.counter = counter;
		     this.threadName = threadName;
		     this.mode = mode;
		 }

 public void run() 
 {
		     if (mode.equals("nosync")) 
		     {
		         counter.incrementWithoutSync(threadName);
		     } else if (mode.equals("method")) 
		     {
		         counter.incrementWithMethod(threadName);
		     } else if (mode.equals("block")) 
		     {
		         counter.incrementWithBlock(threadName);
		     }
		 }
		}

public class threadSynchro 
{
 public static void main(String[] args) 
 {
     // Change mode: "nosync", "method", or "block"
     String mode = "method";  

     Counter counter = new Counter();

     thread2 t1 = new thread2(counter, "Thread-1", mode);
     thread2 t2 = new thread2(counter, "Thread-2", mode);

     t1.start();
     t2.start();
 }
}
