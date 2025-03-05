import java.util.Arrays;

public class nonlapping {
    public int eraseOverlapIntervals(int[][] intervals) {
        int n = intervals.length;
        // Sort the intervals based on the ending time of each interval.
        Arrays.sort(intervals, (a, b) -> Integer.compare(a[1], b[1]));

        int prev = 0; // Initialize the index of the last selected interval.
        int count = 1; // We always select the first interval after sorting.

        // Iterate through the rest of the intervals.
        for (int i = 1; i < n; i++) {
            // If the current interval doesn't overlap with the previous one,
            // we select it.
            if (intervals[i][0] >= intervals[prev][1]) {
                prev = i;
                count++;
            }
        }

        // The minimum number of intervals to remove is the total intervals minus
        // the number of intervals we can keep.
        return n - count;
    }

    public static void main(String[] args) {
        nonlapping solution = new nonlapping();  // Corrected to nonlapping

        // Example 1
        int[][] intervals1 = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
        System.out.println("Example 1: " + solution.eraseOverlapIntervals(intervals1));  // Output: 1

        // Example 2
        int[][] intervals2 = {{1, 2}, {1, 2}, {1, 2}};
        System.out.println("Example 2: " + solution.eraseOverlapIntervals(intervals2));  // Output: 2

        // Example 3
        int[][] intervals3 = {{1, 2}, {2, 3}};
        System.out.println("Example 3: " + solution.eraseOverlapIntervals(intervals3));  // Output: 0
    }
}
