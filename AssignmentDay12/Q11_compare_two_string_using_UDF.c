//11)Write a C program to compare two strings without using built-in string function.

#include<stdio.h>
int main()
{
	char a[30], b[30];
	int i,flag=0;
	
	printf("Enter the 1st strings:");
	scanf("%s",a);
	printf("Enter the 2nd strings:");
	scanf("%s",b);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
			flag=1;
			break;
		}
	}	
	if(flag==0)
	{
		printf("The string is Equal!!");
	}
	else
	{
		printf("The string is not equal!!");
	}
	return 0;
}
