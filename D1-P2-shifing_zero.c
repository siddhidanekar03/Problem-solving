#include<stdio.h>
int main(){
	int i,j,n,temp=0;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		if(arr[i] == 0){
			for(j=i+1; j<n; j++){
				if(arr[j] != 0){
					arr[i]=arr[j];
					arr[j] = 0;
					break;
				}
				
			}
		}
	}
	printf("\nThe sorted array is: ");
	for(i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}
	
	return 0;
}
