# Java Notes
---
---
## Intro

#### About
- Java is a high-level, class-based, object-oriented programming language that is designed to have as few implementation dependencies as possible.
- Java was originally developed by James Gosling at Sun Microsystems. It was released in May 1995 as a core component of Sun Microsystems' Java platform.
-  Oak is a discontinued programming language created by James Gosling in 1989, initially for Sun Microsystems' set-top box project. The language later evolved to become Java.

#### Starting with Java
- Install JDK which stands for Java Development Toolkit.
- If on Windows download Java 19 [here](https://www.oracle.com/java/technologies/javase/jdk19-archive-downloads.html), install it and set local variables.(click here for [help](https://www.examtray.com/tutorials/how-setup-java-environment-in-windows-10))
- If your using Termux on android then use this command to install JDK
```
$ pkg install openjdk-17
```

##### A Hello World Program in Java
```
class Hello {
    public static void main(String args[]) {
        System.out.println("Hello World!!");
    }
}
```

- Save the file as **Hello.java**. It is recommended to for file name to be same as the class name containing the main function.
- Then run the program using this command,
```
$ java Hello.java
```
Output:
```
Hello World!!
```

- The above can be only done on the new versions of java, in the older versions you have to compile the code using *javac* command which will generate the class file and.
```
$ javac Hello.java
```
And the run the program using the *java* command and then the class name.
```
$ java Hello
```
