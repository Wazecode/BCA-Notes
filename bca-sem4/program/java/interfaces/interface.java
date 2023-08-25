interface TwoWheeler {
	final int NumberOfWheels = 2;
	void print_info();
	int noOfWheels();
}

class Bike implements TwoWheeler {
	String name;
	float mileage;
	String model;
	Bike(String n, float m, String mod) {
		name = n;
		mileage = m;
		model = mod;
	}
	
	public void print_info() {
		System.out.println("Name :"+ name);
		System.out.println("mileage :" + mileage);
		System.out.println("Model :"+ model);
	}

	public int noOfWheels() {
		return NumberOfWheels;
	}

}

class interfaces {
	public static void main(String args[]) {
		Bike Activa = new Bike("Activa", 45, "4G");
		Activa.print_info();
		System.out.println("Number of wheels in Activa: "+ Activa.noOfWheels());
	}
}
