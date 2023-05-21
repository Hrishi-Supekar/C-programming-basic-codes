//7)	Write a C program to find length of  character array using built-in string function.

#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i;
	
	printf("\nEnter the string to be added in array:");
	scanf("%s",a);
	
	i=strlen(a);
	printf("The lenght of string is:%d",i);
	return 0;
}
