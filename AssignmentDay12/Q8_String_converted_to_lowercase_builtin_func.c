//8)Write a C program to convert the string to lowercase using built-in string function.


#include<stdio.h>
int main()
{
	char a[30];
	int i;
	printf("Enter the string:");
	scanf("%s",a);
	printf("The orignal String is:%s",a);
	strlwr(a);
	printf("\nThe string converted to Uppercase is:%s",a);
	return 0;
}
