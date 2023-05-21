//4)Write a C program to Find out Transpose of Matrix.

#include<stdio.h>
int main()
{
	int a[10][10],n,m,i,j,sum=0;
	printf("Enter the number:");
	scanf("%d %d",&n,&m);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("Enter the elements to be added a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose Matrix elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
