//17)Write a C program to find Sum of digits of given number 
//(Using Function without return type with parameter values).

#include<stdio.h>
void sum_of_digit(int);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	sum_of_digit(n);
	return 0;
}
void sum_of_digit(int n)
{
	int i,r,sum=0;
	for(i=0;n>0;i++)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("The sum of digit is:%d",sum);
}
