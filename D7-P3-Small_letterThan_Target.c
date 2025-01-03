#include <stdio.h>
char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int i = 0;
    while (i < lettersSize) {
        if (letters[i] > target)
            return letters[i];
        else
            i++;
    }
    return letters[0];
}

int main() {
    char letters[] = {'c', 'f', 'j'};  
    int lettersSize = sizeof(letters) / sizeof(letters[0]);
    char target = 'a';

    char result = nextGreatestLetter(letters, lettersSize, target);
    printf("The next greatest letter after '%c' is: '%c'\n", target, result);

    target = 'c';
    result = nextGreatestLetter(letters, lettersSize, target);
    printf("The next greatest letter after '%c' is: '%c'\n", target, result);

    target = 'k';
    result = nextGreatestLetter(letters, lettersSize, target);
    printf("The next greatest letter after '%c' is: '%c'\n", target, result);

    return 0;
}

