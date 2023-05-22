//12)Write a C program to find Sum of digits of given number 
//(Using Function without return type without parameter values.).

#include<stdio.h>
void sum_of_digit();
int main()
{
	sum_of_digit();
	return 0;
}
void sum_of_digit()
{
	int i,n,r,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("The sum of digit is:%d",sum);
}
