//2)Write a C program to print value of number using pointer.

#include<stdio.h>
int main()
{
	int n,*p;
	printf("Enter the number:");
	scanf("%d",&n);
	p=&n;
	printf("The value of n variable using pointer is:%d",*p);
}
