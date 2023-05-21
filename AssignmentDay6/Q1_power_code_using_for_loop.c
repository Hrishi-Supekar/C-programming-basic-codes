//1)Write a C program to find power of a number using for loop.

//#include<stdio.h>
//void main()
//{
//	int i,base,expo,re;
//	printf("Enter the base value:");
//	scanf("%d",&base);
//	printf("Enter the exponent value:");
//	scanf("%d",&expo);
//	int r=base;	
//	for(i=0;i<expo-1;i++)
//	{
//		re = r*base;
//		r=re;
//	}
//	printf("%d",re);
//}

#include<stdio.h>
void main()
{
	int i,b,e,p=1;
	printf("Enter the base value:");
	scanf("%d",&b);
	printf("Enter the exponent value:");
	scanf("%d",&e);
	for(i=0;i<e;i++)
	{
		p=p*b;
	}
	printf("The answer of %d^%d is:%d",b,e,p);
}

