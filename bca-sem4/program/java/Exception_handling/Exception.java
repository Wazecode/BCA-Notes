class Exception {
	public static void main(String arg[]) {
		int a = 5;
		int b = 0;

		try {
			System.out.println(a/b);
		}
		catch(ArithmeticException e) {
			e.printStackTrace();
		}
	}
}
