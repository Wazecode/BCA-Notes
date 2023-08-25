class overide {
  public static void main(String[] args) {
    System.out.println("Alpha");
    Alpha.greet();
    Alpha.what();

    System.out.println("Beta");
    Beta.greet();
    Beta.what();

    System.out.println("Alif");
    Alif.greet();
    Alif.what();
  }
}

class Alpha {
  static void greet() {
    System.out.println("Hello I am Alpha");
  }
  static void what() {
    System.out.println("I am Greek Alphabet");
  }

}

class Beta extends Alpha {
  static void greet() {
    System.out.println("Hello I am Beta");
  }
}

class Alif extends Beta {
  static void greet() {
    System.out.println("I am Alif");
  }
  static void what() {
    System.out.println("I am an Arabic Alphabet");
  }
}
