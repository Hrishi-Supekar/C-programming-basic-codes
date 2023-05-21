//3.	Write a C program to check whether a number is negative, positive or zero.

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	
	if(num==0)
	{
		printf("The number is %d",num);
	}
	else if(num>0)
	{
		printf("The number %d is +ve number",num);
	}
	else
	{
		printf("The number %d is -ve number",num);
	}
	return 0;
}
