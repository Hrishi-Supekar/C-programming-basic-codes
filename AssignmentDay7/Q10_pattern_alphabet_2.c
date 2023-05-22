//10)Write a C program to print following pattern
//A
//AB
//ABC
//ABCD

#include<stdio.h>
int main()
{
	int i,j,n,x=65;
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

