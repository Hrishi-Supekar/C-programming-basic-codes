//9)Write a C program to convert the string to Lowercase without using built-in string function.

#include<stdio.h>
int main()
{
	char a[30];
	int i;
	printf("Enter the string:");
	scanf("%s",a);
	printf("The orignal String is:%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]=a[i]+32;
		}
	}
	printf("\nThe string converted to lowercase is:%s",a);
}

