#include<stdio.h>
void main()
{
	int rows,columns;
	int k=1;
	printf("Enter the no of rows:");
	scanf("%d",&rows);
	printf("Enter the no of columns:");
	scanf("%d",&columns);
	int a[rows][columns];
	int i=1;
	while(i<=rows)
	{
		int j=1;
		while(j<=columns)
		{
			printf("%d\t",k);
			k++;
			j++;
		}
		i++;
		printf("\n");
	}
}
