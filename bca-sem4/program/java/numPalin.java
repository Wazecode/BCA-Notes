class numPalin {
    public static void main(String s[]) {
        int num = 27872;
        int rem;
        int rev = 0;
        int temp = num;
        while (temp > 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        if (num == rev) {
            System.out.println("The given number is a palindrome");
        } else {
            System.out.println("The given number is not a palindrome");
        }
    }
}
