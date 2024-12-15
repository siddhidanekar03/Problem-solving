#include <stdio.h>

int main() {
    int n, i, weight, total_weight = 0, cost = 0;
    
    printf("Enter the number of items: ");
    scanf("%d", &n);
    
    printf("Enter the weights of %d items (in kg):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &weight);
        total_weight += weight;
    }

    if (total_weight <= 100) {
        cost = total_weight * 10; 
    } else {
        cost = (100 * 10) + ((total_weight - 100) * 20); // 10 Rs for first 100 kg, 20 Rs for extra
    }

    printf("Total weight: %d kg\n", total_weight);
    printf("Total cost: Rs. %d\n", cost);

    return 0;
}

