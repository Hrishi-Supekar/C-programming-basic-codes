//9.Write a C program to print multiplication table of any number.

#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the num:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",n,i,(n*i));
	}	
	return 0;
}
