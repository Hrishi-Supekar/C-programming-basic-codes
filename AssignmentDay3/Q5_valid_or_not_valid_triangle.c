//5.Write a C program to input all sides of a triangle and check whether triangle is valid or not.

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the sides of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a<(b+c)) && (b<(a+c)) && (c<(b+a)))
	printf("The Traingle is valid!!!");
	else
	printf("The trianlge is not valid!!!");

}
