//WAP to find area & circumference of circle

#include<stdio.h>
int main()
{
	float r,c,a;
	float pi = 3.14;
	printf("Enter the radius of circle:");
	scanf("%f",&r);
	a=pi*r*r;
	printf("Area of cirlce is:%f\n",a);
	c=2*pi*r;
	printf("Circumference of circle is:%f\n",c);
	return 0;
}

