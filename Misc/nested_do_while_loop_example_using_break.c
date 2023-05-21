#include<stdio.h>
void main()
{
	int n=2,i,choice;
	do
	{
		i = 1;
		while(i<=10)
		{
			printf("%d X %d = %d\n",n,i,n*i);
			i++;
		}
		printf("Do yo want to continue with table of %d, enter any non-zero value",n+1);
		scanf("%d",&choice);
		if(choice==0)
		break;
		n++;
	}while(1);
}
