//2)Write a C program to find length of string using built-in string function.

#include<stdio.h>
#include<string.h>
int main()
{
	char a[30];
	int cnt;
	printf("Enter the string:");
	scanf("%s",a);
	
	cnt=strlen(a);
	printf("The length of string is:%d",cnt);
	return 0;
}
