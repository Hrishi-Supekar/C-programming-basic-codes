//3)Write a C program to swap two numbers given by user using pointer.

#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter 2 numbers:");
	scanf("%d %d",&a,&b);
	int *p,*q;
	p=&a;
	q=&b;
	printf("The values of a & b before swap is : %d %d",*p,*q);
	temp=*p;
	*p=*q;
	*q=temp;
	printf("\nThe value of a & b after swap is : %d %d",*p,*q);
}

