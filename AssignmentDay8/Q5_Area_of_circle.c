//5)Write a C program to find Area of circle 
//(Using Function without return type without parameter values.).

#include<stdio.h>
const float pi=3.14;
void area_of_circle();
int main()
{
	area_of_circle();
	return 0;
}
void area_of_circle()
{
	float r;
	printf("Enter the radius of circle:");
	scanf("%f",&r);
	
	printf("The area of circle is :%f",pi*r*r);
}
