//write a program that asks user to enter his or her name the program should respond with message that says hello to the user using his or her name.//

import java.util.Scanner;
class HelloWorld {
    public static void main(String[] args) {
        Scanner HelloWorld = new Scanner(System.in);
        System.out.println("ENTER THE NAME : ");
        String name = HelloWorld.nextLine();
        System.out.println("Hello " + name);
    }
}