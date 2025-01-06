char* angryProfessor(int k, int a_count, int* a) {
 int ontime_count = 0;  
    
    
    for (int i = 0; i < a_count; i++) {
        if (a[i] <= 0) {
            ontime_count++;
        }
    }
    
    if (ontime_count <= k) {
        return "YES";
    } else {
        return "NO";
    }
}
int main() {
    // Input data
    int a[] = {-1, -3, 4, 2}; // Arrival times of students
    int a_count = sizeof(a) / sizeof(a[0]); // Number of students
    int k = 3; // Minimum number of students required to be on time for the class to proceed

    // Call the angryProfessor function
    char* result = angryProfessor(k, a_count, a);

    // Output the result
    printf("Professor's response: %s\n", result);

    return 0;
}
