//9)	Write a C program to perform Addition of two numbers (Function with return type without parameter values).

#include<stdio.h>
int add();
int main()
{	
	int c;
	c=add();
	printf("The addition of numbers is:%d",c);
	return 0;
}
int add()
{
	int a,b,c;
	printf("Enter the numbers:");
	scanf("%d %d",&a,&b);
	c=a+b;
	return c;
}

