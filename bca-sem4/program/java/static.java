class Static {
  public static void main(String a[]) {
    car.greet();

    car honda = new car();
    honda.hello();
  }
}

public class car {
  public static void greet() {
    System.out.println("Hi!");
  }

  public int hello() {
    System.out.println("Hello");
    return 0;
  }
}
