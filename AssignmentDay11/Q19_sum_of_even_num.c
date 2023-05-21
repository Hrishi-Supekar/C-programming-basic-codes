//19)	Write a C program to find Sum of all even numbers between 1 to n (Function with return type without parameter values).

#include<stdio.h>
int sum_of_all_odd();
int main()
{
	int ans;
	ans=sum_of_all_odd();
	printf("The sum of even digits is:%d",ans);
	return 0;
}
int sum_of_all_odd()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int i,sum=0;
	for(i=1;i<=n;i++)
	{	
		if(i%2==0)
		{
			sum=sum+i;	
		}
	}
	return sum;	
}
