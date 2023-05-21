//3)Write a C program to perform conversion from Fahrenheit to Celsius  
//(Using Function without return type without parameter values.).
//celsius = ((fahrenheit-32)*5)/9

#include<stdio.h>
void f_to_c();
int main()
{
	f_to_c();
	return 0;
}
void f_to_c()
{
	float f,c;
	printf("Enter the temp in farhenheit:");
	scanf("%f",&f);
	
	c=(f-32)*5/9;
	printf("The temp in °C is:%f",c);
}
