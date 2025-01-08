#include<stdio.h>
#include<string.h>
void reverse(char str[]){
	int start=0;
	int end= strlen(str)-1;
	char temp;
	
	while(start < end){
		temp = str[end];
		str[end]=str[start];
		str[start]=temp;
		
		start++;
		end--;
	}
}

int main(){
	int str[100];
	printf("Enter the string: ");
	scanf("%s",str);
	
	reverse(str);
	printf("The reversed sting is: %s",str);
	return 0;
}
