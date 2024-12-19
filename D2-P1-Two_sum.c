#include<stdio.h>
void two_sum(int arr[],int target,int n){
	int i,j,find=0;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if((arr[i] + arr[j])== target){
				find++;
				printf("\nThe indexes are [%d ,%d]",i,j);
			}
		}
		
	}
	if(find == 0){
		printf("There is no pair of indices whose sum is equal to target");
	}
}
int main(){
	int n,i;
	printf("Enter value of N: ");
	scanf("%d",&n);
	int nums[n];
	
	printf("\nEnter %d elements: ",n);
	for(i=0; i<n; i++){
		scanf("%d",&nums[i]);
	}
	int target =0;
	printf("\nEnter target: ");
	scanf("%d",&target);
	
	two_sum(nums,target,n);
	
}
