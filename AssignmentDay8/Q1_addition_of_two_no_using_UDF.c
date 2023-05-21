//1)Write a C program to perform Addition of two numbers 
//(Using Function without return type without parameter values.)

#include<stdio.h>
void add();
int main()
{
	add();
	return 0;
}
void add()
{
	int a,b,c;
	printf("Enter the 2 nos:");
	scanf("%d %d",&a,&b);
	
	c=a+b;
	printf("The addition of 2 nos is:%d",c);
}

