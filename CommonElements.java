public class CommonElements {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int[] arr1 = {2, 8, 5, 1, 5};
        int[] arr2 = new int[arr.length]; // Maximum possible size of arr2 is arr.length

        int k = 0; // Index for arr2
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr1.length; j++) {
                if (arr[i] == arr1[j]) {
                    // Check if the element is already added to arr2
                    boolean isAlreadyAdded = false;
                    for (int m = 0; m < k; m++) {
                        if (arr2[m] == arr[i]) {
                            isAlreadyAdded = true;
                            break;
                        }
                    }
                    if (!isAlreadyAdded) {
                        arr2[k] = arr[i];
                        k++;
                    }
                }
            }
        }

        // Print the common elements
        for (int i = 0; i < k; i++) {
            System.out.println(arr2[i]);
        }
    }
}