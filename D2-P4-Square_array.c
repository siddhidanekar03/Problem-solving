#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int arr[n],temp ;
	
	printf("\nEnter %d elements: ",n);
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	//squaring array elements
	for(i=0; i<n; i++){
		arr[i]= arr[i]*arr[i];
	}
	
	//display array after squaring
	printf("\nSquared array (before sorting): ");
	for(i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n-i-1; j++){
			if(arr[j]> arr[j+1]){
				temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("\nArray after sorting: ");
	for(i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}
	
	
	
}
