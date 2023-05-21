// 9.Write a C program to print multiplication table of any number.

#include<stdio.h>
void main()
{
	int i=1,number;
	printf("Enter the number:");
	scanf("%d",&number);
	
	do
	{
		printf("%d*%d=%d\n",number,i,(number*i));
		i++;
	}
	while(i<=10);
}
