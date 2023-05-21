//5)Write a C program to print Fibonacci series up to n terms.

#include<stdio.h>
int main()
{
	int s,i,a=0,b=1,n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The fibonnaci series is:%d %d ",a,b);
	for(i=2;i<n;i++)
	{
		s=a+b;
		a=b;
		b=s;
		if(s<n)
		printf("%d ",s);
	}
	
	return 0;
}

