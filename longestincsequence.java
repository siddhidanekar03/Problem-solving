
public class longestincsequence {

    public static int lengthOfLIS(int[] nums) {
        if (nums.length == 0) return 0;

        int n = nums.length;
        int[] dp = new int[n];
        int maxLen = 1;

        // Every element is at least a subsequence of length 1
        for (int i = 0; i < n; i++) {
            dp[i] = 1;
        }

        // Build the dp array
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    dp[i] = Math.max(dp[i], dp[j] + 1);
                }
            }
            maxLen = Math.max(maxLen, dp[i]);
        }

        return maxLen;
    }

    public static void main(String[] args) {
        int[] nums = {10, 9, 2, 5, 3, 7, 101, 18};
        int lisLength = lengthOfLIS(nums);
        System.out.println("Length of Longest Increasing Subsequence: " + lisLength);
    }
}
