//WAP to convert Fahrenheit temp in degree Celsius.
//(32°F - 32) × 5/9 = 0°C

#include<stdio.h>
int main()
{
	float f,C;
	printf("Enter the temperature in Fahrenheit:");
	scanf("%f",&f);
	C = (f-32)*5/9;
	printf("The temperature in °C is:%f",C);	
	return 0;
}

