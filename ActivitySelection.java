import java.util.Arrays;
import java.util.Scanner;

class Activity {
    int start, end;

    public Activity(int start, int end) {
        this.start = start;
        this.end = end;
    }
}

public class ActivitySelection {

    public static void selectActivities(Activity[] intervals) {
        // Sort using lambda: by end time (ascending)
        Arrays.sort(intervals, (a, b) -> a.end - b.end);

        System.out.println("\nSelected activities:");
        System.out.println("Start: " + intervals[0].start + ", End: " + intervals[0].end);
        int lastEnd = intervals[0].end;

        for (int i = 1; i < intervals.length; i++) {
            if (intervals[i].start >= lastEnd) {
                System.out.println("Start: " + intervals[i].start + ", End: " + intervals[i].end);
                lastEnd = intervals[i].end;
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Ask user for number of activities
        System.out.print("Enter the number of activities: ");
        int n = scanner.nextInt();

        Activity[] intervals = new Activity[n];

        // Input each activity
        for (int i = 0; i < n; i++) {
            System.out.print("Enter start time for activity " + (i + 1) + ": ");
            int start = scanner.nextInt();
            System.out.print("Enter end time for activity " + (i + 1) + ": ");
            int end = scanner.nextInt();

            intervals[i] = new Activity(start, end);
        }

        selectActivities(intervals);

        scanner.close();
    }
}
