//9)Write a C program to print following pattern
//1
//3	5
//7 9 11
//13 15	17 19


#include<stdio.h>
int main()
{
	int i,j,n,sum=1;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",sum);
			sum=sum+2;
		}
		printf("\n");
	}
	return 0;
}
