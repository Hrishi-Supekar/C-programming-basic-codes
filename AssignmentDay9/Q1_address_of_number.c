//1)Write a C program to print address of number.

#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	
	printf("The address of number %d is:%u",a,&a);
	return 0;
}
