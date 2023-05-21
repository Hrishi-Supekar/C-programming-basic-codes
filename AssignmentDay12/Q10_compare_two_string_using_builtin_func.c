//10)Write a C program to compare two strings using built-in string function.


#include<stdio.h>
int main()
{
	char a[30], b[30];
	int ans;
	
	printf("Enter the 2 strings:");
	scanf("%s %s",a,b);
	
	ans=strcmp(a,b);
	if(ans==0)
	{
		printf("The string is Equal!!");
	}
	else
	{
		printf("The string is not equal!!");
	}
	return 0;
}
