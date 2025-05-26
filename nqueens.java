public class nqueens {

    // Main function to solve the N-Queens problem
    public static boolean solveNQueens(int[][] board, int col, int n) {
        // Base case: all queens placed
        if (col >= n) {
            return true;
        }

        // Try placing a queen in all rows one by one
        for (int i = 0; i < n; i++) {
            if (isSafe(board, i, col, n)) {
                board[i][col] = 1; // Place queen

                // Recur to place rest of the queens
                if (solveNQueens(board, col + 1, n)) {
                    return true;
                }

                // Backtrack
                board[i][col] = 0;
            }
        }

        // No valid position found in this column
        return false;
    }

    // Check if it's safe to place a queen at board[row][col]
    public static boolean isSafe(int[][] board, int row, int col, int n) {
        // Check left side of the current row
        for (int i = 0; i < col; i++) {
            if (board[row][i] == 1) return false;
        }

        // Check upper-left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 1) return false;
        }

        // Check lower-left diagonal
        for (int i = row, j = col; i < n && j >= 0; i++, j--) {
            if (board[i][j] == 1) return false;
        }

        return true;
    }

    // Utility to print the board
    public static void printBoard(int[][] board, int n) {
        for (int[] row : board) {
            for (int val : row) {
                System.out.print((val == 1 ? "Q " : ". "));
            }
            System.out.println();
        }
    }

    // Driver method
    public static void main(String[] args) {
        int n = 8; // Change to any N
        int[][] board = new int[n][n];

        if (solveNQueens(board, 0, n)) {
            printBoard(board, n);
        } else {
            System.out.println("No solution exists");
        }
    }
}
