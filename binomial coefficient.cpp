#include<iostream>
using namespace std;

int factN(int n)
{
	int i;
	int fact=1;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}

int bcoef(int n,int r)
{
	factN(n);
	factN(r);
	factN(n-r);
	int coefficient=factN(n)/(factN(r)*factN(n-r));
	return coefficient;
}
int main()
{
	cout<<"Coefficient:"<<bcoef(6,3)<<endl;
	return 0;
}
