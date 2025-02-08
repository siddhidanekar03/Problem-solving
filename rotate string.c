bool rotateString(char* s, char* goal) {
    char temp;
    int count=0;
    int len=strlen(s);
    while(count<len)
    {
        temp=s[0];
        for(int i=1;i<len;i++)
        {
            s[i-1]=s[i];
        }
        s[len-1]=temp;
         count++;
         
         if(strcmp(s,goal)==0)
         {
            return true;
         }
    
    }
    
        return false;
    
}

int main() {
    char s[] = "abcde";
    char goal[] = "cdeab";

    printf("%s\n", rotateString(s, goal) ? "true" : "false");
    return 0;
}
