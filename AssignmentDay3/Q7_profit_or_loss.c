//7.Write a C program to calculate profit or loss.

#include<stdio.h>
int main()
{
	int sp,cp,p;
	printf("Enter the selling price:");
	scanf("%d",&sp);
	printf("Enter the cost price:");
	scanf("%d",&cp);
	
	p=sp-cp;
	if(p>0)
	printf("The profit is %d",p);
	else
	printf("The loss is %d",abs(p));
}
