int* breakingRecords(int scores_count, int* scores, int* result_count) {
int newmincount = 0, newmaxcount = 0;
    int min = INT_MAX;  
    int max = INT_MIN;  
    
    for (int i = 0; i < scores_count; i++) {
      
        if (scores[i] < min) {
            min = scores[i];  
            if (i != 0) {
                newmincount++; 
            }
        }
        
        if (scores[i] > max) {
            max = scores[i]; 
            if (i != 0) {
                newmaxcount++; 
            }
        }
    }

    
    int* result = (int*)malloc(2 * sizeof(int));
    
    
    result[0] = newmaxcount;
    result[1] = newmincount;

     
    *result_count = 2;

    return result;
}

int main() {
    int scores[] = {10, 5, 20, 20, 4, 5, 2, 25, 1};
    int scores_count = sizeof(scores) / sizeof(scores[0]);
    int result_count;
    
    int* result = breakingRecords(scores_count, scores, &result_count);

    printf("Maximum break count: %d\n", result[0]);
    printf("Minimum break count: %d\n", result[1]);

    free(result);
    return 0;
}
