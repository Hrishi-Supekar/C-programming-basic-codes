//10)	Write a C program to perform conversion from Kilometer to meter (Function with return type without parameter values).

#include<stdio.h>
float km_to_m();
int main()
{	
	float ans;
	ans=km_to_m();
	printf("The distance in meters is:%.2fm",ans);
	return 0;
}
float km_to_m()
{
	float km,ans;
	printf("Enter the distance in Kms:");
	scanf("%f",&km);
	ans=km*1000;
	return ans;
}
