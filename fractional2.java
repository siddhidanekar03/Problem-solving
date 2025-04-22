import java.util.Arrays;
import java.util.Scanner;
import java.util.Comparator;

public class fractional2 {
     public static double knapSack(int[] values, int[] weights, int n, int capacity){
        double[] ratio = new double[n];
        for(int i=0; i<n; i++){
            ratio[i]= (double)values[i]/weights[i];
        }
        Integer[] indices = new Integer[n];
        for(int i=0; i<n; i++){
            indices[i]=i;
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

     public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no. of values and weight: ");
        int n= sc.nextInt();
        int[] values= new int[n];
        for(int i=0; i<n ; i++){
            System.out.println("Enter the values: ");
            values[i]=sc.nextInt();
        }
        int[] weights=new int[n];
        for(int i=0; i<n; i++){
            System.out.println("Enter the weights: ");
            weights[i]=sc.nextInt();
        }
        System.out.println("Enter the capacity: ");
        int capacity=sc.nextInt();

        double result = knapSack(values, weights, n, capacity);

        System.out.println("Maximum profit is: "+ result);



     }
}
