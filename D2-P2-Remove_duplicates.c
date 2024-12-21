#include<stdio.h>
void remove_duplicate(int arr[],int size){
	int k=1,i=0;
	for(i=1; i<size; i++){
		if(arr[i] != arr[i-1]){
			arr[k]= arr[i];
			k++;
		}
	}
	
	for(i=0; i<k; i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	int n,i;
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter %d elements: ",n);
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	remove_duplicate(arr, n);
}
