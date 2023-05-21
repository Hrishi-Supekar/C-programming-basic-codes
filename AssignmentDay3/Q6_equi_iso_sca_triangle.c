//6.	Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a<(b+c)) && (b<(a+c)) && (c<(b+a)))
	{
		if(a==b && b==c && c==a)
		printf("The triangle is Equilateral triangle!!!");
		else if(a!=b && a!=c && b!=c)
		printf("The triangle is Scalene triangle!!!");
		else
		printf("The traingle is Isosceles triangle!!!");
	}
}
