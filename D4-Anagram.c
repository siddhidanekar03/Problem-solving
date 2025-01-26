#include <stdio.h>
#include<string.h>
#include<stdbool.h>

bool isAnagram(char* s, char* t){
    if(strlen(s) == strlen(t)){
        int a[256]={0};
        int b[256]={0};
        
        for(int i=0; s[i]!='\0'; i++){
            a[(unsigned char)s[i]] += 1;
            b[(unsigned char)t[i]] += 1;
        }
        
        //int count=0;
        for(int i=0; s[i]!= '\0'; i++){
            if(a[(unsigned char)s[i]] != b[(unsigned char)s[i]] ){
                return false;
            }
        }
        
        
        return true;
        
        
        
        
    }
}
int main()
{   char str1[10], str2[10];

    printf("Enter two strings: ");
    scanf("%s",str1);
    scanf("%s",str2);
    
    int result = isAnagram(str1 , str2);
    if(result){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}
