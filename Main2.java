import java.util.Arrays;

public class Main2 {

    static class Solution {

        class Info {
            int sum;
            int dis;

            Info(int s, int d) {
                this.sum = s;
                this.dis = d;
            }
        }

        public Info twoSum(int[] nums, int i, int j, int target, int tar) {
            int sum = 0;
            int distance = Integer.MAX_VALUE;

            while (i < j) {
                int currSum = nums[i] + nums[j] + tar;
                int currDis = Math.abs(currSum - target);

                if (currDis < distance) {
                    distance = currDis;
                    sum = currSum;
                }

                if (currSum < target) {
                    i++;
                } else if (currSum > target) {
                    j--;
                } else {
                    return new Info(currSum, 0);
                }
            }

            return new Info(sum, distance);
        }

        public int threeSumClosest(int[] nums, int target) {
            int dis = Integer.MAX_VALUE;
            int n = nums.length;
            Info triplet;
            int sum = 0;
            Arrays.sort(nums);

            for (int i = 0; i < n; i++) {
                int tar = nums[i];
                int lo = i + 1;
                int hi = n - 1;
                triplet = twoSum(nums, lo, hi, target, tar);
                if (triplet.dis < dis) {
                    dis = triplet.dis;
                    sum = triplet.sum;
                }
            }

            return sum;
        }
    }

    public static void main(String[] args) {
        Solution sol = new Solution();

        int[] nums = {-1, 2, 1, -4};
        int target = 1;

        int closestSum = sol.threeSumClosest(nums, target);
        System.out.println("Closest sum to target is: " + closestSum);
    }
}
