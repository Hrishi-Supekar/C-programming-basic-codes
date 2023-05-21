//Write a program which will accept three integer numbers from user and find out greatest
//among them using conditional operator.

#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter the 1st number:");
	scanf("%d",&a);
	printf("Enter the 2nd number:");
	scanf("%d",&b);
	printf("Enter the 3rd number:");
	scanf("%d",&c);
	max = a>b?(a>c?a:c):(b>c?b:c);
	printf("The max value outoff 3 integers is:%d",max);
	return 0;
	
}

