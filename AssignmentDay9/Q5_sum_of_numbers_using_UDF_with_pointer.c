//5)Write a C program to print sum of 1 to n numbers where n is given by user using pointer. 
//[Hint: void sum_of(int*n,int*sum) ]

#include<stdio.h>
void sum(int*,int*);
int main()
{
	int n,sum1=0;
	printf("Enter the number:");
	scanf("%d",&n);
//	int *p;
	sum(&n,&sum1);
	printf("The sum of numbers from 1 to %d is:%d",n,sum1);
	return 0;
}
void sum(int*n,int*sum1)
{
	int i;
	for(i=1;i<=*n;i++)
	{
		*sum1=*sum1+i;
	}
}
