import java.util.Scanner;

public class oddeven {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Ask the user to input a number
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        // Check if the number is even or odd
        if (number % 2 == 0) {
            System.out.println(number + " is even.");
        } else {
            System.out.println(number + " is odd.");
        }

        // Close the scanner object to avoid memory leaks
        scanner.close();
    }
}
