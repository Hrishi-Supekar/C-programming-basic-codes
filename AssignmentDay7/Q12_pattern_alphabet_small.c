//12)Write a C program to print following pattern
//a
//ab
//abc
//abcd

#include<stdio.h>
int main()
{
	int i,j,n,x;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{	
		x=97;
		for(j=1;j<=i;j++)
		{
			printf("%c",x++);
		}
		printf("\n");
	}
	return 0;
}
