//10.Write a C program to count number of digits in a number.

#include<stdio.h>
//#include<string.h>
void main()
{
//	int n;
//	char x;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	
//	x=char(n);
//	printf("count of number:",x);

	int n,c=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		c++;
	}
	printf("The count of digits is :%d",c);
}
