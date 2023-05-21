//3)Write a C program to Display sum of non diagonal elements.

#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j,sum=0;
	printf("Enter the number:");
	scanf("%d %d",&r,&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter the elements to be added a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix-A elements are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix non-diagonal elements are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i!=j)
				sum=sum+a[i][j];
		}
	}
	printf("%d",sum);
	return 0;
}


