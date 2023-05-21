//4.	Write a C program to check whether a number is divisible by 5 and 11 or not.


#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	
	if(num%5==0 && num%11==0)
	{
		printf("The number %d is divisible by 5 and 11 both",num);
	}
	else
	{
		printf("The number %d is not divisible by 5 and 11 both",num);
	}
	return 0;	
}
