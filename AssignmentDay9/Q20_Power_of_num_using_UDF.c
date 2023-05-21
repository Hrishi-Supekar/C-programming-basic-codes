	//20)Write a C program to accept base and exponent. Find Power of given number 
	//(Using Function without return type with parameter values).
	
	
	#include<stdio.h>
	void power_of_num(int,int);
	int main()
	{
		int b,e;
		printf("Enter the base value:");
		scanf("%d",&b);
		printf("Enter the expo value:");
		scanf("%d",&e);
		power_of_num(b,e);
		return 0;
	}
	void power_of_num(int b,int e)
	{
		int i,re,r;
		r=b;
		for(i=0;i<e-1;i++)
		{
			re=r*b;
			r=re;
		}
		printf("The value of %d^%d is :%d",b,e,re);
	}
