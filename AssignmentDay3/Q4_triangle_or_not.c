//4.Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the anlges of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a+b+c)==180)
	printf("It is a triangle!!");
	else
	printf("It is not a triangle!!");
	return 0;	
}
