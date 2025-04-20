 import java.util.Arrays;
import java.util.Comparator;

public class fractionalKnap {

    // Function to solve the Fractional Knapsack problem
    public static double fractionalKnapsack(int[] values, int[] weights, int n, int capacity) {
        // Step 1: Create an array of ratios (value/weight)
        double[] ratio = new double[n];
        for (int i = 0; i < n; i++) {
            ratio[i] = (double) values[i] / weights[i];
        }
        
        // Step 2: Sort items by ratio in descending order
        Integer[] indices = new Integer[n];
        for (int i = 0; i < n; i++) {
            indices[i] = i;
        }

        Arrays.sort(indices, new Comparator<Integer>() {
            public int compare(Integer a, Integer b) {
                return Double.compare(ratio[b], ratio[a]); // Sort in descending order of ratios
            }
        });
        
        // Step 3: Initialize total value and current weight
        double totalValue = 0;
        int currentWeight = 0;
        
        // Step 4: Iterate through sorted items
        for (int i = 0; i < n; i++) {
            int idx = indices[i];
            if (currentWeight + weights[idx] <= capacity) {
                // Take the whole item
                totalValue += values[idx];
                currentWeight += weights[idx];
            } else {
                // Take a fraction of the item
                int remainingCapacity = capacity - currentWeight;
                totalValue += ratio[idx] * remainingCapacity;
                break;  // No more capacity left
            }
        }
        
        return totalValue;
    }

    public static void main(String[] args) {
        // Example: Arrays of values and weights of items
        int[] values = {60, 100, 120};
        int[] weights = {10, 20, 30};
        int n = values.length;
        int capacity = 50;
        
        // Function call to solve the fractional knapsack problem
        double result = fractionalKnapsack(values, weights, n, capacity);
        
        // Output the maximum value we can obtain
        System.out.printf("Maximum value we can obtain: %.2f\n", result);
    }
} 
    

