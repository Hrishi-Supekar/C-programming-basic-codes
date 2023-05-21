//4)Write a C program to reverse the String using built-in string function.

#include<stdio.h>
#include<string.h>
int main()
{
	char a[30];
	printf("Enter the string:");
	scanf("%s",a);
	printf("The original string:%s",a);
	strrev(a);
	printf("\nThe reverse string:%s",a);
	return 0;
}
