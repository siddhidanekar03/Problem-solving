package hello;
import java.util.Scanner;
import java.util.*;

public class ques1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner (System.in);
		System.out.println("Enter a number: ");
		int num1 = sc.nextInt();

        String binary = Integer.toBinaryString(num1);
        String octal  = Integer.toOctalString(num1);
        String hexa = Integer.toHexString(num1);
        
        System.out.println("Binary equivalent: " + binary);
        System.out.println("Octal equivalent: " + octal);
        System.out.println("Binary equivalent: " + hexa);
        
		
		

	}

}
