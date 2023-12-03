class NumberPrinter implements Runnable {
    private int limit;
    private boolean isEven;

    public NumberPrinter(int limit, boolean isEven) {
        this.limit = limit;
        this.isEven = isEven;
    }

    public void run() {
        String threadType = isEven ? "Even Thread" : "Odd Thread";
        System.out.println(threadType + " started.");
        
        for (int i = isEven ? 2 : 1; i <= limit; i += 2) {
            if (!isEven) {
                System.out.println(threadType + ": " + i);
            } else {
                System.out.println(threadType + ": " + i);
            }
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        System.out.println(threadType + " finished.");
    }
}

public class OddEvenNumberPrinter {
    public static void main(String[] args) {
        int limit = 20; // Specify the limit for odd and even numbers
        
        Thread oddThread = new Thread(new NumberPrinter(limit, false));
        Thread evenThread = new Thread(new NumberPrinter(limit, true));
        
        oddThread.start();
        evenThread.start();
    }
}