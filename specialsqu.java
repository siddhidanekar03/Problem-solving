public class specialsqu {
    public int sumOfSquares(int[] nums) {
        int n = nums.length;
       int ans = 0;

       // Check if i is a divisor of the array length n
       for (int i = 1; i <= nums.length; i++) {
           if (n % i == 0) {
               ans += nums[i - 1] * nums[i - 1];
           }
       }

       return ans;
   }

   public static void main(String[] args) {
       specialsqu solution = new specialsqu();
       int[] nums = {1, 2, 3, 4, 5, 6};
       
       int result = solution.sumOfSquares(nums);
       
       System.out.println("Sum of squares of special elements: " + result);
   }
    
}
