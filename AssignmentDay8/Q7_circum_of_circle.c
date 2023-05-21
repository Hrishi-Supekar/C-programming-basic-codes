//7)Write a C program to find Circumference of circle 
//(Using Function without return type without parameter values.).

#include<stdio.h>
const float pi=3.14;
void cirm_of_circle();
int main()
{
	cirm_of_circle();
	return 0;
}
void cirm_of_circle()
{
	float r,cir;
	printf("Enter the radius:");
	scanf("%f",&r);
	
	cir=2*pi*r;
	printf("The circumference of circle is:%f",cir);
}

