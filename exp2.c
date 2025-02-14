//min max
#include<stdio.h>
#include<limits.h>
void minmax(int arr[],int n,int *min,int *max){
	 *min=INT_MAX;
	*max=INT_MIN;
	int i;
	for(i=0;i<n;i++){
		if(*min>arr[i]){
			*min=arr[i];
		}
		
		if(*max<arr[i]){
			*max=arr[i];
		}
	}
	
}
int main(){
	
	int n,i;
	int min,max;
	printf("Enter the no:");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	minmax(arr,n,&min,&max);
	printf("Minimum: %d\n",min);
	printf("Maximum: %d\n",max);
	
	return 0;
}
	
	
