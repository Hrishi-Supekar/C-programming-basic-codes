//10)Write a C program to find Area of circle
//(Using Function without return type with parameter values).

#include<stdio.h>
const float pi=3.14;
void area_of_circle(float);
int main()
{
	float r;
	printf("Enter the radius of circle:");
	scanf("%f",&r);
	area_of_circle(r);
	return 0;
}
void area_of_circle(float r)
{
	printf("The area of circle is :%f",pi*r*r);
}
