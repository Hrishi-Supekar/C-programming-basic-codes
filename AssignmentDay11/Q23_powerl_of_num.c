//23)	Write a C program to accept base and exponent. Find Power of given number (Function with return type without parameter values).

#include<stdio.h>
int power_of_num();
int main()
{
	int ans;
	ans=power_of_num();
	printf("The value is :%d",ans);
	return 0;
}
int power_of_num()
{
	int b,e,i,re,r;
	printf("Enter the base value:");
	scanf("%d",&b);
	printf("Enter the expo value:");
	scanf("%d",&e);
	r=b;
	for(i=1;i<=e-1;i++)
	{
		re=r*b;
		r=re;
	}
	return re;
}
