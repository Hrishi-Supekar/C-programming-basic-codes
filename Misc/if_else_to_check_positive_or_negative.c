//WAP to check whether a given number is +ve or -ve.

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number to check:");
	scanf("%d",&num);
	if(num>=0)
	{
		printf("The number %d is a positive number",num);
	}
	else
	{
		printf("The number %d is a negative number",num);
	}
	return 0;
}
