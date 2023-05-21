//18)Write a C program to print Fibonacci series up to n terms.


#include<stdio.h>
void main()
{
	int i,a=0,b=1,sum,n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The fibonnaci series is:%d %d ",a,b);
	for(i=2;i<n;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("%d ",sum);
	}
}

