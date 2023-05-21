#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the no:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
		i++;
	}
}
