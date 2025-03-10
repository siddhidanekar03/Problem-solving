class sort {
    public void sortColors(int[] nums) {
         mergeSort(nums, 0, nums.length - 1);
    }
    
    public static void mergeSort(int arr[], int si, int ei) {
        if (si >= ei) {
            return;
        }
        int mid = si + (ei - si) / 2;
        mergeSort(arr, si, mid);
        mergeSort(arr, mid + 1, ei);
        merge(arr, si, mid, ei);
    }
    
    public static void merge(int arr[], int si, int mid, int ei) {
        int[] temp = new int[ei - si + 1];
        int i = si;
        int j = mid + 1;
        int k = 0;

        while (i <= mid && j <= ei) {
            if (arr[i] < arr[j]) {
                temp[k] = arr[i];
                i++;
            } else {
                temp[k] = arr[j];
                j++;
            }
            k++;
        }
        while (i <= mid) {
            temp[k++] = arr[i++];
        }
        while (j <= ei) {
            temp[k++] = arr[j++];
        }
        for (k = 0, i = si; k < temp.length; k++, i++) {
            arr[i] = temp[k];
        }
    }

    public static void main(String[] args) {
        sort solution = new sort();
        int[] nums = {2, 0, 2, 1, 1, 0};
        System.out.println("Before sorting: ");
        for (int num : nums) {
            System.out.print(num + " ");
        }
        System.out.println();
        
        solution.sortColors(nums);
        
        System.out.println("After sorting: ");
        for (int num : nums) {
            System.out.print(num + " ");
        }
    }
}
