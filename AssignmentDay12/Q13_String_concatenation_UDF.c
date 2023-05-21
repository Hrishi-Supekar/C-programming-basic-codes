//13)Write a C program to concatenate two Strings without using built-in string function.

#include<stdio.h>
int main()
{
	char a[30],b[30];
	int i,j,cnt=0;
	printf("Enter the 1st strings:");
	scanf("%s",a);
	printf("Enter the 2nd strings:");
	scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
		cnt++;
	}
	for(i=cnt,j=0;b[j]!='\0';i++,j++)
	{
		a[i]=b[j];
	}
	printf("The concatenated string is:%s",a);
	return 0;
}
