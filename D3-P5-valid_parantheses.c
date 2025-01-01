#include <stdbool.h>
#include <stdio.h>
#include<string.h>

int push(int stack[], int size, int *t, char s) {
    if (*t == size - 1)
        return -1;  
        (*t)++;
        stack[*t] = s;  
        return 1;  
    }


int pop(int stack[], int *t) {
    char s;
    if (*t == -1)
        return 0;  
    else {
        s = stack[*t];  
        (*t)--;  
        return s;
    }
}

bool isValid(char* s) {
    int n=strlen(s);
    int stack[n];  
    int t = -1,i=0; 

    for ( i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

    
        if (ch == '(' || ch == '[' || ch == '{') {
            if (push(stack,n, &t, ch) == -1) {
                return false;  
            }
        }
        
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (t == -1) {
                return false;  
            }

            char top = pop(stack, &t);  
            if ((ch == ')' && top != '(') || 
                (ch == ']' && top != '[') || 
                (ch == '}' && top != '{')) {
                return false; 
            }
        }
    }

    return t == -1;  
}
int main(){
	char str[20];
	printf("Enter a string: ");
	scanf("%s",str);
	
	int result = isValid(str);
	if(result){
		printf("True");
	}
	else{
		printf("False");
	}
	
}
