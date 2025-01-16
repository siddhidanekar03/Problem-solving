int utopianTree(int n) {
    int height = 1;  
    
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            
            height *= 2;
        } else {
           
            height += 1;
        }
    }
    
    return height;  
}
int main() {
    // Input value
    int n = 5; // The number of cycles

    // Call the utopianTree function
    int result = utopianTree(n);

    // Output the result
    printf("The height of the tree after %d cycles is: %d\n", n, result);

    return 0;
}
