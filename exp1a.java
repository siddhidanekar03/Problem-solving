public class exp1a {
    public static int countInversions(int[] arr) {
        return mergeSort(arr, 0, arr.length - 1);
    }

    public static int mergeSort(int[] arr, int si, int ei) {
        int count = 0;
        if (si < ei) {
            int mid = si + (ei - si) / 2;
            count += mergeSort(arr, si, mid);
            count += mergeSort(arr, mid + 1, ei);
            count += mergeAndPrint(arr, si, mid, ei); // changed here
        }
        return count;
    }

    public static int mergeAndPrint(int[] arr, int si, int mid, int ei) {
        int[] temp = new int[ei - si + 1];
        int i = si, j = mid + 1, k = 0;
        int invCount = 0;

        while (i <= mid && j <= ei) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                for (int x = i; x <= mid; x++) {
                    System.out.println("Inversion: (" + arr[x] + ", " + arr[j - 1] + ")");
                    invCount++;
                }
            }
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

        return invCount;
    }

    public static void main(String[] args) {
        int[] arr = {4, 2, 5, 2, 9, 7, 1, 3};
        System.out.println("Inversion pairs:");
        int inversions = countInversions(arr);
        System.out.println("\nSorted Array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println("\nTotal Inversions: " + inversions);
    }
}
