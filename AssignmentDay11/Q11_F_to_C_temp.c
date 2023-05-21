//11)	Write a C program to perform conversion from Fahrenheit to Celsius  (Function with return type without parameter values).
//celsius = ((fahrenheit-32)*5)/9

#include<stdio.h>
float f_to_c();
int main()
{
	float c;
	c=f_to_c();
	printf("The temp in °C is:%.2f",c);
	return 0;
}
float f_to_c()
{
	float f,c;
	printf("Enter the temp in farhenheit:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	return c;
	
}
