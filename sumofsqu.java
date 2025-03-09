import java.util.Scanner;
2

public class sumofsqu {
    public boolean judgeSquareSum(int c) {
        int low = 0, high = (int) Math.sqrt(c);
        while (low <= high) {
            long sum = (long) low * low + (long) high * high;
            if (sum == c) {
                return true;
            } else if (sum < c) {
                low++;
            } else {
                high--;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int c = scanner.nextInt();
        scanner.close();

        sumofsqu solution = new sumofsqu(); // Fixed constructor issue
        if (solution.judgeSquareSum(c)) {
            System.out.println(c + " can be expressed as a sum of two squares.");
        } else {
            System.out.println(c + " cannot be expressed as a sum of two squares.");
        }
    }
}
