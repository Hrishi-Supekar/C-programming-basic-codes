//11)Write a C program to find Area of rectangle
//(Using Function without return type with parameter values).

#include<stdio.h>
void area_of_rect(float,float);
int main()
{
	float l,w;
	printf("Enter the length and width:");
	scanf("%f %f",&l,&w);
	area_of_rect(l,w);
	return 0;
}
void area_of_rect(float l,float w)
{
	printf("The area of rectangle is :%f",(l*w));
}
