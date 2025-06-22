package hello;
import java.util.Scanner;

public class ques2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the num1 and num2: ");
        
        if (sc.hasNextDouble() && !sc.hasNextInt()) {
            double num1 = sc.nextDouble();
            
            if (sc.hasNextDouble() && !sc.hasNextInt()) {
                double num2 = sc.nextDouble();
                
                double average = (num1 + num2) / 2;
                System.out.println("Average: " + average);
            } else {
                System.out.println("Invalid input for num2");
            }

        } else {
            System.out.println("Error");
        }

        sc.close();
    }
}
