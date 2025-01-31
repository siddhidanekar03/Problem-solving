int divisibleSumPairs(int n, int k, int ar_count, int* ar) {

    ar_count=0;
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if((ar[i]+ar[j])%k==0)
        {
            ar_count++;
        }
    }
   }
   return ar_count;
}
int main() {
    // Input array and parameters
    int ar[] = {1, 3, 2, 6, 1, 2};
    int n = sizeof(ar) / sizeof(ar[0]); // Calculate the size of the array
    int k = 3;                         // Divisor
    int ar_count = 0;                  // Initialize pair count (not needed for input)

    // Call the divisibleSumPairs function
    int result = divisibleSumPairs(n, k, ar_count, ar);

    // Print the result
    printf("Number of divisible sum pairs: %d\n", result);

    return 0;
}
