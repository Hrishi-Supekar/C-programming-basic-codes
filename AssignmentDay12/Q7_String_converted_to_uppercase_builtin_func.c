//7)Write a C program to convert the string to Uppercase using built-in string function.

#include<stdio.h>
int main()
{
	char a[30];
	int i;
	printf("Enter the string:");
	scanf("%s",a);
	printf("The orignal String is:%s",a);
	strupr(a);
	printf("\nThe string converted to Uppercase is:%s",a);
}
