#include <stdio.h>
#include <string.h>

int prefixCount(char** words, int wordsSize, char* pref) {
    int len = strlen(pref);
    int count = 0;

    for (int i = 0; i < wordsSize; i++) {
        char* current_string = words[i];  
        int j = 0;
        while (j < len) {
            if (pref[j] != current_string[j]) {
                break; 
            }
            j++;
        }

        if (j == len) {
            count++;
        }
    }

    return count;
}

int main() {
    char* words[] = {"apple", "apricot", "banana", "application"};
    printf("%d\n", prefixCount(words, 4, "ap")); // Output: 3

    return 0;
}

