public class Solution {

    public int minDistance(String word1, String word2) {
        final int m = word1.length(); // first word length
        final int n = word2.length(); // second word length

        // dp[i][j] := min # of operations to convert word1[0..i) to word2[0..j)
        int[][] dp = new int[m + 1][n + 1];

        // Initialize the base cases
        for (int i = 1; i <= m; ++i)
            dp[i][0] = i; // delete all characters from word1

        for (int j = 1; j <= n; ++j)
            dp[0][j] = j; // insert all characters to word1

        // Fill the DP table
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (word1.charAt(i - 1) == word2.charAt(j - 1)) {
                    dp[i][j] = dp[i - 1][j - 1]; // characters match, no operation
                } else {
                    dp[i][j] = Math.min(
                            dp[i - 1][j - 1], // replace
                            Math.min(dp[i - 1][j], // delete
                                     dp[i][j - 1]) // insert
                    ) + 1;
                }
            }
        }

        return dp[m][n];
    }

    // Main method for testing
    public static void main(String[] args) {
        Solution solution = new Solution();

        String word1 = "horse";
        String word2 = "ros";

        int result = solution.minDistance(word1, word2);
        System.out.println("The minimum edit distance is: " + result);
    }
}
