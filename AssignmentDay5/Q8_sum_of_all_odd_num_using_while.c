//8)Write a C program to find sum of all odd numbers between 1 to n.

#include<stdio.h>
void main()
{
	int n,num=1,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(num<=n)
	{
		if(num%2!=0)
		{
			sum=sum+num;	
		}
		num++;
	}
	printf("%d",sum);
}

