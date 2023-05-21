//5)Write a C program to Find Sum of two matrices.

#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],n,m,i,j,sum=0;
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
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("Enter the elements to be added b[%d][%d]",i,j);
		scanf("%d",&b[i][j]);
		}
	}
	printf("Matrix a elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix b elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("Addition of Matrix elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=(a[i][j]+b[i][j]);
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
