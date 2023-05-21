//6)Write a C program to find Area of rectangle 
//(Using Function without return type without parameter values.).

#include<stdio.h>
void area_of_rect();
int main()
{
	area_of_rect();
	return 0;
}
void area_of_rect()
{
	float l,w;
	printf("Enter the length and width:");
	scanf("%f %f",&l,&w);
	
	printf("The area of rectangle is :%f",(l*w));
}
