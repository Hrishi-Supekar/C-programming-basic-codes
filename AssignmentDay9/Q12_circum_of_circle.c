//12)Write a C program to find Circumference of circle 
//(Using Function without return type with parameter values).

#include<stdio.h>
const float pi=3.14;
void cirm_of_circle(float);
int main()
{
	float r;
	printf("Enter the radius:");
	scanf("%f",&r);
	cirm_of_circle(r);
	return 0;
}
void cirm_of_circle(float r)
{
	float cir;
	cir=2*pi*r;
	printf("The circumference of circle is:%f",cir);
}
