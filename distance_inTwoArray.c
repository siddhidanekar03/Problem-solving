#include <stdio.h>
#include <stdlib.h>
int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d) {
    int count=0,j;
    for(int i=0; i<arr1Size; i++){
        for(j=0; j<arr2Size; j++){
            if(abs(arr1[i]-arr2[j]) <= d){
                break;
            }
        }
        if(j==arr2Size){
            count++;
        }
    }
    return count;
}
int main() {
    // Test input
    int arr1[] = {2, 1, 100, 3};
    int arr2[] = {-5, -2, 10, -3, 7};
    int d = 6;

    // Calculate array sizes
    int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);

    // Call the function
    int result = findTheDistanceValue(arr1, arr1Size, arr2, arr2Size, d);

    // Print the result
    printf("The distance value is: %d\n", result);

    return 0;
}
