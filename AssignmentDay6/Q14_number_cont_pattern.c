//14)Write a C program to print following pattern
//1
//23
//456
//78910
//FLOYD Traingle
#include<stdio.h>
int main()
{
	int sum=1,i,j,n;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",sum++);
		}
		printf("\n");	
	}
}
