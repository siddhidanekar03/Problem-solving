#include<stdio.h>
int main()
{
float distance,a,b,c;
printf("enter the distance between two cities in kilometres");
scanf("%f",&distance);
a=distance*1000;
printf("the distance between two cities in metre is %.1f\n",a);
b=distance*3281;
printf("the distance between two cities in feet is %.1f\n",b);
c=distance*100000;
printf("the distance between two cities in cm is %.1f",c);

	
} 
