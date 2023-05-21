//2)Write a C program to perform conversion from Kilometer to meter.

//Category 1:(Using Function with return type with parameter values.)
//#include<stdio.h>
//float km_to_m(float);
//int main()
//{
//	float km,ans;
//	printf("Enter the distance in KM:");
//	scanf("%f",&km);
//	ans=km_to_m(km);
//	printf("The value of distance in meters is:%.2fm",ans);
//	return 0;
//}
//float km_to_m(float km)
//{
//	float m;
//	m=km*1000;
//	return m;
//}
//=======================================================================================================
//Category 2:(Using Function with return type without parameter values.)
//#include<stdio.h>
//float km_to_m();
//int main()
//{
//	float ans;
//	ans = km_to_m();
//	printf("The valus of distance in meters is:%.2fm",ans);
//	return 0;
//}
//float km_to_m()
//{
//	float km,m;
//	printf("Enter the distance in km:");
//	scanf("%f",&km);
//	m=km*1000;
//	return m;
//}
//=======================================================================================================
//Category 3:(Using Function without return type with parameter values.)
//#include<stdio.h>
//void km_to_m(float);
//int main()
//{
//	float km;
//	printf("Enter the distance in km:");
//	scanf("%f",&km);
//	km_to_m(km);
//	return 0;
//}
//void km_to_m(float km)
//{
//	float m;	
//	m=km*1000;
//	printf("The valus of distance in meters is:%.2fm",m);
//}
//=======================================================================================================
//Category 4:(Using Function without return type without parameter values.)
#include<stdio.h>
void km_to_m();
int main()
{
	km_to_m();
	return 0;
}
void km_to_m()
{
	float km,m;
	printf("Enter the distance in km:");
	scanf("%f",&km);
	m=km*1000;
	printf("The valus of distance in meters is:%.2fm",m);
}
