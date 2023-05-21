//10.Write a C program to count number of digits in a number.

#include<stdio.h>
void main()
{
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
