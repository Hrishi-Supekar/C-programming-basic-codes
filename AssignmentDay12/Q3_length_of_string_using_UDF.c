//3)Write a C program to find length of string without using built-in string function.

#include<stdio.h>
int main()
{
	char a[30];
	int i,cnt=0;
	printf("Enter the string:");
	scanf("%s",a);
	
	for(i=0;a[i]!='\0';i++)
	{
		cnt++;
	}
	printf("The length of string is:%d",cnt);
	return 0;
}
