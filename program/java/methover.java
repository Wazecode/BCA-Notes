class methover {
    static int sum(int x, int y) {
        return x + y;
    }

    static int sum(int x, int y, int z) {
        return x + y + z;
    }

    static int sum(int w, int x, int y, int z){
          return w + x + y + z;
        }

    static double sum(double x, double y) {
        return x + y;
    }

    public static void main(String a[]) {
        System.out.println(sum(10, 20));
        sum(10,10,10,10);
        System.out.println(sum(10, 20, 30));
        System.out.println(sum(10.65, 20.77));
    }

}
