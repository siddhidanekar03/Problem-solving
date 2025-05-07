public class sumofsubset{

    
    static boolean sumOfSubset(int[] set, int targetSum, int currentSum, int index, int n, int[] solution) {
        
        if (currentSum == targetSum) {
            printSolution(set, solution);
            return true;
        }

        
        if (currentSum > targetSum || index >= n) {
            return false;
        }

        
        solution[index] = 1;
        if (sumOfSubset(set, targetSum, currentSum + set[index], index + 1, n, solution)) {
            return true;
        }

        solution[index] = 0;
        if (sumOfSubset(set, targetSum, currentSum, index + 1, n, solution)) {
            return true;
        }

        
        return false;
    }

    
    static void printSolution(int[] set, int[] solution) {
        System.out.print("Subset with target sum: ");
        for (int i = 0; i < set.length; i++) {
            if (solution[i] == 1) {
                System.out.print(set[i] + " ");
            }
        }
        System.out.println();
    }

    
    static void findSubset(int[] set, int targetSum) {
        int n = set.length;
        int[] solution = new int[n];

        if (!sumOfSubset(set, targetSum, 0, 0, n, solution)) {
            System.out.println("No solution exists");
        }
    }
    public static void main(String[] args) {
        int[] set = {3, 34, 4, 12, 5, 2};
        int targetSum = 9;

        findSubset(set, targetSum);
    }
}
