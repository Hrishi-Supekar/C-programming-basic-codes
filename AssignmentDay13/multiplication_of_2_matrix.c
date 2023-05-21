//Q.Multiplication of 2 matrices.
//#include<stdio.h>
//int main()
//{
//	int a[3][3],b[3][3],c[3][3],i,j;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("Enter the value at a[%d][%d]:",i,j);
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("Enter the value at b[%d][%d]:",i,j);
//			scanf("%d",&b[i][j]);
//		}
//	}
//	printf("Matrix a is:\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%d\t",a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("Matrix b is:\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%d\t",b[i][j]);
//		}
//		printf("\n");
//	}
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			c[i][j]=(a[i][0]*b[0][j])+(a[i][1]*b[1][j])+(a[i][2]*b[2][j]);
//		}
//	}
//	printf("Matrix c is:\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%d\t",c[i][j]);
//		}
//		printf("\n");
//	}
//}

#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,k,r,c;
	printf("Enter the num of rows:");
	scanf("%d",&r);
	printf("Enter the num of columns:");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the elements to be added at a[%d][%d]::",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the elements to be added at b[%d][%d]::",i,j);
			scanf("%d",&b[i][j]);
		}
	}	
	printf("\nThe elements in Matrix-A:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
	printf("The elements in Matrix-B:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("The elements in Multiplication Matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
