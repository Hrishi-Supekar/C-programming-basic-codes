//17)	Write a C program to find Sum of 1 to n (Function with return type without parameter values).


#include<stdio.h>
int sum_one_to_n();
int main()
{
	int ans;
	ans = sum_one_to_n();
	printf("The sum is :%d",ans);
	return 0;
}
int sum_one_to_n()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;	
	}
	return sum;
}
