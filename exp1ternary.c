//Ternary Search
#include<stdio.h>

int ternarySearch(int arr[],int n,int target){
	
	int left=0,right=n-1;
	
	while(left<=right){
		
		int mid1=left + (right-left)/3;
		int mid2=right - (right-left)/3;
		
		if(arr[mid1]==target){
			return mid1;
		}
		if(arr[mid2]==target){
			return mid2;
		}
		
		if(target<arr[mid1]){
			right=mid1-1;
			
		}
		
		else if(target>arr[mid2])
		{
			left=mid2+1;
		}
		
		else{
			left=mid1+1;
			right=mid2-1;
		}
		
	}
	return -1;
}

int main(){
	
	int n,i;
	printf("Enter the no:");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int target;
	printf("Enter the target:");
	scanf("%d",&target);
	
	int result=ternarySearch(arr,n,target);
	
	 if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
	
	
	
	
}
