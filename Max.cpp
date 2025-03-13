//max consecutive count
#include<stdio.h>
 int findmaxones(int* nums, int numsize) {
    int maxcount = 0, currentcount = 0;
    
    if (numsize == 0) 
	{
        return 0;
    }
    
    for (int i = 0; i < numsize; i++) {
        if (nums[i] == 1) {
            
			currentcount++;  
        } 
		else 
		{
            currentcount = 0;  
        }
        if (currentcount > maxcount)
		{
            maxcount = currentcount;
        }
    }
    
    return maxcount;
}


int main()
{
	int i,j,n;
	int nums[10];
	
	printf("Enter the no. of elements of array:\n");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&nums[i]);
	}
	int result=findmaxones(nums,n);
	printf("%d",result);
	
}
