//15)Write a C program to accept base and exponent. Find Power of given number 
//(Using Function without return type without parameter values.).




//15)Write a C program to accept base and exponent. Find Power of given number 
//(Using Function without return type without parameter values.).

#include<stdio.h>
void power_of_num();
int main()
{
	power_of_num();
	return 0;
}
void power_of_num()
{
	int i,base,expo,p=1;
	printf("Enter the base value:");
	scanf("%d",&base);
	printf("Enter the expo value:");
	scanf("%d",&expo);
	for(i=0;i<expo;i++)
	{
		p=p*base;
	}
	printf("The value of %d^%d is :%d",base,expo,p);
}
