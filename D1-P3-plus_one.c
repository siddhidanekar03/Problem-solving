#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i;
    
    printf("Enter the number of digits: ");
    scanf("%d", &n);
    
    int digits[n];
    
    // Input the digits array
    printf("Enter the digits: ");
    for ( i = 0; i < n; i++) {
        scanf("%d", &digits[i]);
    }
    
    int carry = 1; // Incrementing by 1 implies a carry of 1
    for (i = n - 1; i >= 0; i--) {
        digits[i] += carry;
        if (digits[i] == 10) { 
            digits[i] = 0;
            carry = 1;
        } else { // If no carry is needed, stop processing
            carry = 0;
            break;
        }
    }
    
    // Check if an extra digit is needed
    if (carry == 1) {
        int* result = (int*)malloc((n + 1) * sizeof(int));
        result[0] = 1;
        for (i = 1; i <= n; i++) {
            result[i] = digits[i - 1];
        }
        
        printf("Result: ");
        for (i = 0; i <= n; i++) {
            printf("%d", result[i]);
        }
        printf("\n");
        
        free(result);
    } else {
        
        printf("Result: ");
        for (i = 0; i < n; i++) {
            printf("%d", digits[i]);
        }
        printf("\n");
    }
    
    return 0;
}
