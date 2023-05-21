//8)Write a C program to perform conversion from Fahrenheit to Celsius  
//(Using Function without return type with parameter values).
//celsius = ((fahrenheit-32)*5)/9

#include<stdio.h>
void f_to_c(float);
int main()
{
	float f;
	printf("Enter the temp in farhenheit:");
	scanf("%f",&f);
	f_to_c(f);
	return 0;
}
void f_to_c(float f)
{
	float c;
	c=(f-32)*5/9;
	printf("The temp in °C is:%f",c);
}
