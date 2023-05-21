//16)Write a C program to find Sum of all even numbers between 1 to n 
//(Using Function without return type with parameter values).

#include<stdio.h>
void sum_of_all_even(int);
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	sum_of_all_even(n);
	return 0;
}
void sum_of_all_even(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{	
		if(i%2==0)
		{
			sum=sum+i;	
		}
	}
	printf("The sum of even digits is:%d",sum);
}
