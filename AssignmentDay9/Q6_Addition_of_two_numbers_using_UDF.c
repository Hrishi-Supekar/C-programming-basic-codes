//6)Write a C program to perform Addition of two numbers 
//(Using Function without return type with parameter values).

#include<stdio.h>
void add(int, int);
int main()
{
	int a,b;
	printf("Enter the 2 nos:");
	scanf("%d %d",&a,&b);
	add(a,b);
	return 0;
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("The addition of 2 nos is:%d",c);
}
