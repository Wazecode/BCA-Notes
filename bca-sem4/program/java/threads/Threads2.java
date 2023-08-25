class Odd extends Thread {
	public void printOdd() {
		try {
			for(int i = 1; i < 20; i+=2) {
				System.out.println("Odd: " + i);
				Thread.sleep(200);
			}
		} catch(InterruptedException e) {
			e.printStackTrace();
		}
	}

	public void run() {
		printOdd();
	}
}


class Even extends Thread {
	public void printEven() {
		try {
			for(int i = 0; i < 20; i+=2) {
				System.out.println("\tEven: " + i);
				Thread.sleep(200);
			}
		} catch(InterruptedException e) {
			e.printStackTrace();
		}
	}

	public void run() {
		printEven();
	}
}

public class Threads2 {
	public static void main(String args[]) {
		Odd o = new Odd();
		Even e = new Even();
		o.start();
		e.start();
	}
}
