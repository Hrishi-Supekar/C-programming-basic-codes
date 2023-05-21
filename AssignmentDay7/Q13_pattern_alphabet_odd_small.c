//13)Write a C program to print following pattern
//a
//ce
//gik
//moqs

#include<stdio.h>
int main()
{
	int x=97,i,j,n;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=i;j++)
		{
			printf("%c ",x);
			x=x+2;
		}
		printf("\n");
	}
	return 0;
}
