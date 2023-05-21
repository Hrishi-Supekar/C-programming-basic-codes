//9)Write a C program to find Sum of 1 to n 
//(Using Function without return type without parameter values.).

#include<stdio.h>
void sum_one_to_n();
int main()
{
	sum_one_to_n();
	return 0;
}
void sum_one_to_n()
{
	int i,n,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;	
	}
	printf("The sum is :%d",sum);
}

