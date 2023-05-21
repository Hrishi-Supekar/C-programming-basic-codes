#include<stdio.h>
int main()
{
	int sum=1,i,j,n;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d ",sum+2);
		}
		printf("\n");	
	}
}
