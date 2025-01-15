#include <stdio.h>

// Function definition
int viralAdvertising(int n) {
    int people = 5; 
    int like_count = 0;  
    for (int i = 0; i < n; i++) {
        int like_ad = people / 2;
        like_count += like_ad;  
        people = like_ad * 3;   
    }
    return like_count;
}

// Main function
int main() {
    int n;
    printf("Enter the number of days: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number of days should be positive.\n");
        return 1; // Exit with error code
    }

    int result = viralAdvertising(n);
    printf("Total likes after %d days: %d\n", n, result);

    return 0; // Exit successfully
}

