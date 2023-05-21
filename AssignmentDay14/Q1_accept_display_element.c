//1)Write a C program to accept and display Elements from user in matrix.

#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j;
	printf("Enter the number:");
	scanf("%d %d",&r,&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter the elements to be added a[%d][%d]::",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix elements are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


