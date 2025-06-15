public class MaxSubarray {

    public static int max(int a, int b){
        return (a > b) ? a:b;
    }

    public static int max3(int a, int b, int c){
        return max(max(a, b),c);
    }

    public static int maxCrossingSubarray(int[] arr, int low, int mid, int high){
        int leftSum = Integer.MIN_VALUE;
        int sum=0;
         for(int i= mid; i>= low; i--){
            sum += arr[i];
            if(leftSum <  sum){
                leftSum = sum;
            }
         }

         int rightSum = Integer.MIN_VALUE;
          sum = 0;
         for(int i = mid +1; i<=high; i++){
            sum +=arr[i];
            if(rightSum < sum){
                rightSum = sum;
            }
         }
         return leftSum + rightSum;
    }

    public static int maxSubarray(int [] arr, int low, int high){
        if(low == high){
            return arr[low];
        }
        int mid = low + (high - low)/2;
        int leftSum = maxSubarray(arr, low, mid);
        int rightSum = maxSubarray(arr, mid+1, high);
        int crossSum = maxCrossingSubarray(arr, low, mid, high);

        return max3(leftSum, rightSum, crossSum);
    }

    public static void main(String args[]){
        int[] arr = {2, -4, 3, -1, 5, -6, 1, 4};
        int maxSum= maxSubarray(arr, 0, arr.length-1);
        System.out.println("Maximum subarray is: "+ maxSum);
    }
    
}
