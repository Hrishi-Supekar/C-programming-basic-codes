//8)	Write a C program to find length of character array without using built-in string function.

#include<stdio.h>
int main()
{
	char a[10];
	int i,cnt=0;
	
	printf("Enter the string to be added in array:");
	scanf("%s",a);
	
	for(i=0;a[i]!='\0';i++)
	{
		cnt++;
	}
	
	printf("The length of a string is:%d",cnt);
	return 0;
}
