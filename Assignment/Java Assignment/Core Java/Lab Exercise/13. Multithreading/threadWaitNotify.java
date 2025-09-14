package Assignment;

class noPrint {
    private int num = 1;
    private final int MAX = 10;
    private boolean isOddTurn = true;

    // Print odd no.
    public synchronized void printOdd() {
        while (num <= MAX) {
            while (!isOddTurn) {
                try {
                    wait(); // wait for even thread
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            System.out.println("Odd Thread: " + num);
            num++;
            isOddTurn = false;
            notifyAll(); // wake up waiting threads
        }
    }

    // Print even no.
    public synchronized void printEven() {
        while (num <= MAX) {
            while (isOddTurn) {
                try {
                    wait(); // wait for odd thread
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            System.out.println("Even Thread: " + num);
            num++;
            isOddTurn = true;
            notifyAll(); // wake up waiting threads
        }
    }
}

class OddThread extends Thread {
    private noPrint printer;

    public OddThread(noPrint printer) {
        this.printer = printer;
    }

    public void run() {
        printer.printOdd();
    }
}

class EvenThread extends Thread {
    private noPrint printer;

    public EvenThread(noPrint printer) {
        this.printer = printer;
    }

    public void run() {
        printer.printEven();
    }
}

public class  threadWaitNotify {
    public static void main(String[] args) {
        noPrint printer = new noPrint();

        OddThread odd = new OddThread(printer);
        EvenThread even = new EvenThread(printer);

        odd.start();
        even.start();
    }
}
