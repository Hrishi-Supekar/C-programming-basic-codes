//5)Write a C program to reverse the String without using built-in string function.

#include<stdio.h>
int main()
{
	char a[30],b[30];
	int end,cnt=0,i;
	printf("Enter the string:");
	scanf("%s",a);
	printf("The Original String is:%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		cnt++;
	}
	end=cnt-1;
	for(i=0;i<=cnt;i++)
	{
		b[i]=a[end];
		end--;
	}
	printf("\nThe reverse string is:%s",b);
	return 0;
}
