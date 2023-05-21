
#include<stdio.h>
//#include<string.h>
void main()
{
	int n,x,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
		
	}
	printf("The count of digits is :%d",sum);
}
