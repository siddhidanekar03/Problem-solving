#include<stdio.h>

int main() {
    int n, i, max_product = 1, zero_count = 0;
    printf("Enter value of N: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            zero_count++;
        } else {
            max_product *= arr[i];
        }
    }

    for (i = 0; i < n; i++) {
        if (zero_count > 1) {
            printf("0\t");
        } 
		else if (arr[i] == 0) {
        	
            printf("%d\t", max_product);
        } 
		else {
            
            if (zero_count == 1) {
                
                printf("0\t");
            } else {
                
                printf("%d\t", max_product / arr[i]);
            }
        }
    }

    return 0;
}

