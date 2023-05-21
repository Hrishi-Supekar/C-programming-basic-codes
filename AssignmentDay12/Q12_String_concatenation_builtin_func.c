//12)Write a C program to concatenate two Strings using built-in string function.

#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],b[30];
	printf("Enter the 1st strings:");
	scanf("%s",a);
	printf("Enter the 2nd strings:");
	scanf("%s",b);
	strcat(a,b);
	printf("The concatenated string is:%s",a);
	return 0;
}
