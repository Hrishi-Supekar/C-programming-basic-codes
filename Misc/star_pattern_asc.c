#include<stdio.h>
int main()
{
	int n,i,j,x=1;
	printf("Enter the num:");
	scanf("%d",&n);
	
	for(i=0;i!=n;i++)
	{
		for(j=1;j<=x;j++)
		{
			if(x%2!=0)
			{
				printf("*");
			}
		}
		printf("\n");
		x=x+2;
	}
	return 0;
}
