//14)Write a C program to copy String into another String using built-in string function.

#include<stdio.h>
#include<string.h>
int main()
{
	char a[30], b[30];
	printf("Enter the string:");
	scanf("%s",a);
	printf("The original string is:%s",a);
	strcpy(b,a);
	printf("\nThe copied string is:%s",b);
	return 0;
}
