class Threads extends Thread {
	public static void main(String s[]) {
		Threads t = new Threads();
		t.start();
		try {

			for (int i = 0; i < 10; i++) {
				System.out.println("main :" + i);
				Thread.sleep(300);
			}
		} 
		catch(InterruptedException e) {
			e.printStackTrace();
		}
	}

	public void run() {
	try {	
			for (int i = 0; i < 10; i++) {
				System.out.println("\tThread :" + i);
				Thread.sleep(500);
			}
	} catch(InterruptedException e) {
		e.printStackTrace();
	}
	}
	
}
