int hurdleRace(int k, int height_count, int* height) {
    int max_h=INT_MIN;
    for(int i=0;i<height_count;i++)
    {
        if(max_h<height[i])
        {
            max_h=height[i];
        }
    }
    if(k>=max_h)
        {
            return 0;
        }
    else {
        return max_h-k;
        }

}
int main() {
    // Input data
    int height[] = {1, 2, 3, 3, 2};  // Heights of hurdles
    int height_count = sizeof(height) / sizeof(height[0]); // Number of hurdles
    int k = 1; // Maximum height the character can jump naturally

    // Call the hurdleRace function
    int result = hurdleRace(k, height_count, height);

    // Output the result
    if (result == 0) {
        printf("No potions needed. Character can jump all hurdles.\n");
    } else {
        printf("Number of potions needed: %d\n", result);
    }

    return 0;
}
