import java.util.Arrays;
import java.util.Comparator;

public class exp5{

    public static double fractionalKnapsack(int[] profits, int[]weights, int n, int capacity){

        double[] ratio = new double[n];
        for(int i=0; i<n; i++){
            ratio[i] = (double)profits[i]/weights[i];
        }

        Integer[] indices = new Integer[n];
        for(int i=0; i<n; i++){
            indices[i] = i;
        }
        Arrays.sort(indices, new Comparator<Integer>(){
            public int compare(Integer a, Integer b){
                return Double.compare(ratio[b], ratio[a]);
            }
        });

        double totalProfit=0;
        int currentWeight=0;
        for(int i=0; i<n; i++){
            int idx = indices[i];
            if(currentWeight + weights[idx] <= capacity){
                totalProfit += profits[idx];
                currentWeight += weights[idx];
            }else{
                int remainingCapacity = capacity - currentWeight;
                totalProfit += ratio[idx]*remainingCapacity;
                break;
            }
        }
        return totalProfit;
         
    }

    public static void main(String args[]){
        int[] profits = {60, 100, 120};
        int[] weights = {10, 20, 30};
        int n = profits.length;
        int capacity =50;

        double result = fractionalKnapsack(profits, weights, n, capacity);
        System.out.println("Maximum profit we can obtain: " + result);
    }
}