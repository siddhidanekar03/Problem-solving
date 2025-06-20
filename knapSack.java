public class knapSack{
    public static int knapSackTab(int[] val, int[] wt, int W, int n){
        int dp[][] = new int[n + 1][W + 1];
         for(int i=0; i<=n; i++){
            for(int w=0; w<=W; w++){
                if(i==0 || w==0){
                    dp[i][w] = 0;
                }else if(wt[i-1] <= w){
                    dp[i][w] = Math.max(val[i -1] + dp[i-1][w -wt[i-1]], dp[i-1][w]);
                }
                else{
                    dp[i][w]= dp[i-1][w];
                }
            }
         }
         return dp[n][W];
    }

    public static void main(String args[]){
        int[] val ={60, 100, 120};
        int[] wt = {10, 20, 30};
        int W = 50;
        int n = val.length;

        int maxValue = knapSackTab(val, wt, W, n);
        System.out.println("Maximum value in knapsack : " + maxValue);
    }
    
}