//3)Write a C program to perform conversion from Fahrenheit to Celsius(celsius = ((fahrenheit-32)*5)/9).

//Category 1:(Using Function with return type with parameter values.)
//#include<stdio.h>
//float f_to_c(float);
//int main()
//{
//	float f,ans;
//	printf("Enter the temp in °F:");
//	scanf("%f",&f);
//	ans=f_to_c(f);
//	printf("The temp in °C is:%.2f",ans);	
//	return 0;
//}
//float f_to_c(float f)
//{
//	float c;
//	c=(f-32)*5/9;
//	return c;
//}
//=======================================================================================================
//Category 2:(Using Function with return type without parameter values.)
//#include<stdio.h>
//float f_to_c();
//int main()
//{
//	float ans;
//	ans=f_to_c();
//	printf("The temp in C is:%.2f",ans);	
//	return 0;
//}
//float f_to_c()
//{
//	float f,c;
//	printf("Enter the temp in F:");
//	scanf("%f",&f);
//	c=(f-32)*5/9;
//	return c;
//}
//=======================================================================================================
//Category 3:(Using Function without return type with parameter values.)
//#include<stdio.h>
//void f_to_c(float);
//int main()
//{
//	float f;
//	printf("Enter the temp in F:");
//	scanf("%f",&f);
//	f_to_c(f);	
//	return 0;
//}
//void f_to_c(float f)
//{
//	float c;	
//	c=(f-32)*5/9;
//	printf("The temp in C is:%.2f",c);
//}
//=======================================================================================================
//Category 4:(Using Function without return type without parameter values.)
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
	printf("Enter the temp in F:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("The temp in C is:%.2f",c);
}
