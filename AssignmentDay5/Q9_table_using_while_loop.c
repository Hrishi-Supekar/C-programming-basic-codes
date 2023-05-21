//9)Write a C program to print multiplication table of any number.

#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(i<=10)
	{
		printf("%dx%d=%d\n",n,i,(n*i));
		i++;
	}	
}

