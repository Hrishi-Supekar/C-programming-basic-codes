//12)Write a C program to print following pattern
//a
//ab
//abc
//abcd

#include<stdio.h>
int main()
{
	int i,j,n,x=97;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=i;j++)
		{
			printf("%c",x++);
		}
		printf("\n");
	}
	return 0;
}
