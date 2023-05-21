//22)	Write a C program to find Factorial of given number (Function with return type without parameter values).


#include<stdio.h>
int factorial();
int main()
{
	int ans;
	ans=factorial();
	printf("The factorial of number is:%d",ans);
	return 0;
}
int factorial()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int i,fact=1;
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	return fact;
}
