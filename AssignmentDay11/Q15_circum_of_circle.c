//15)	Write a C program to find Circumference of circle (Function with return type without parameter values).


#include<stdio.h>
const float pi=3.14;
float cirm_of_circle();
int main()
{
	float cir;
	cir=cirm_of_circle();
	printf("The circumference of circle is:%f",cir);
	return 0;
}
float cirm_of_circle()
{
	float r,cir;
	printf("Enter the radius:");
	scanf("%f",&r);
	cir=2*pi*r;
	return cir;
}
