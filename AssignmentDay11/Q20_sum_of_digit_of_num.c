//20)	Write a C program to find Sum of digits of given number (Function with return type without parameter values).


#include<stdio.h>
int sum_of_digit();
int main()
{
	int ans;
	ans=sum_of_digit();
	printf("The sum of digit is:%d",ans);
	return 0;
}
int sum_of_digit()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int i,r,sum=0;
	for(i=0;n>0;i++)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	return sum;
}
