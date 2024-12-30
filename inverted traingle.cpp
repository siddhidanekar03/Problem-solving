#include<iostream>
using namespace std;
int main()
{
	int n=4;
	int i,j,k;
	
	for(i=0;i<n;i++)
	{
	      
		for(j=0;j<i;j++)
		{
			cout<<" ";
		}
			for(k=0;k<n-i;k++)
			{
				cout<<(i+1)<<" ";			
		    }
			
		
		cout<<endl;
    }
	return 0;
}
