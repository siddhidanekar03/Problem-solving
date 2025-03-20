import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<Integer> findPeaks(int[] mountain) {
        List<Integer> peaks = new ArrayList<>();
        
        // Iterate through the array, starting from 1 and ending at mountain.length - 1
        for (int i = 1; i < mountain.length - 1; i++) {
            // Check if the current element is greater than both its left and right neighbors
            if (mountain[i] > mountain[i - 1] && mountain[i] > mountain[i + 1]) {
                peaks.add(i);  // Add the index of the peak
            }
        }
        
        return peaks;  // Return the list of peak indices
    }
}

public class Main {
    public static void main(String[] args) {
        // Create an instance of the Solution class
        Solution sol = new Solution();
        
        // Example array representing a mountain range
        int[] mountain = {1, 3, 2, 4, 6, 5, 7, 6};
        
        // Find peaks
        List<Integer> peaks = sol.findPeaks(mountain);
        
        // Output the indices of all peaks found
        System.out.println("Peaks are found at the following indices:");
        for (int peak : peaks) {
            System.out.print(peak + " ");
        }
    }
}
