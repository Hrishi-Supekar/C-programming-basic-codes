//15)Write a C program to copy String into another String without using built-in string function.

#include<stdio.h>

int main()
{
	char a[30], b[30];
	int i;
	printf("Enter the string:");
	scanf("%s",a);
	printf("The original string is:%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	printf("\nThe copied string is:%s",b);
	return 0;
}
