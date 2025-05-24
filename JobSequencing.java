import java.util.Arrays;
import java.util.Comparator;

class Job {
    int id;
    int deadline;
    int profit;

    // Constructor to initialize job with id, deadline, and profit
    public Job(int id, int deadline, int profit) {
        this.id = id;
        this.deadline = deadline;
        this.profit = profit;
    }
}

public class JobSequencing {

    // Function to sort jobs by profit in descending order
    public static void sortJobsByProfit(Job[] jobs) {
        Arrays.sort(jobs, new Comparator<Job>() {
            public int compare(Job a, Job b) {
                return b.profit - a.profit; // Sort by descending profit
            }
        });
    }

    // Function to find the maximum profit that can be obtained by sequencing jobs
    public static int jobSequencing(Job[] jobs, int n) {
        // Step 1: Sort jobs by profit in descending order
        sortJobsByProfit(jobs);

        // Step 2: Find the maximum deadline
        int maxDeadline = 0;
        for (int i = 0; i < n; i++) {
            if (jobs[i].deadline > maxDeadline) {
                maxDeadline = jobs[i].deadline;
            }
        }

        // Step 3: Initialize slots array and total profit
        int[] slots = new int[maxDeadline];
        Arrays.fill(slots, -1); // All slots are initially empty (-1)
        int totalProfit = 0;

        // Step 4: Assign jobs to slots
        for (int i = 0; i < n; i++) {
            // Try to find a free slot for the current job
            for (int j = Math.min(maxDeadline, jobs[i].deadline) - 1; j >= 0; j--) {
                if (slots[j] == -1) { // Slot is empty
                    slots[j] = i; // Assign job i to this slot
                    totalProfit += jobs[i].profit; // Add the profit of the job
                    break;
                }
            }
        }

        return totalProfit; // Return total profit
    }

    public static void main(String[] args) {
        // Example: Jobs array with id, deadline, and profit
        Job[] jobs = {
            new Job(1, 4, 20),
            new Job(2, 1, 10),
            new Job(3, 1, 40),
            new Job(4, 1, 30)
        };

        int n = jobs.length;

        // Function call to solve the job sequencing problem
        int result = jobSequencing(jobs, n);

        // Output the total profit we can obtain
        System.out.println("Maximum profit we can obtain: " + result);
    }
}
