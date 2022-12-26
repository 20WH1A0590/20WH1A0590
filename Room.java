
import java.util.Scanner;
public class Room {
	private static Scanner sc;


	public static void main(String[] args) {
		// TODO Auto-generated method stub
		float length,breadth,area;
		sc=new Scanner(System.in);
		System.out.println("enter the length and breadth : ");
		length=sc.nextFloat();
		breadth=sc.nextFloat();
area=length*breadth;
System.out.format("\n The Area of room = %.2fft"+ "\n",area);
	}

}
