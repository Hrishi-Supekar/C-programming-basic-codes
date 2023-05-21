//Q5)Write a C program to find Area of circle
//Category 1:(Using Function with return type with parameter values.)
//#include<stdio.h>
//const float pi=3.14;
//float area_of_circle(float);
//int main()
//{
//	float r,ans;
//	printf("Enter the radius of circle:");
//	scanf("%f",&r);
//	ans=area_of_circle(r);
//	printf("The area of cirlce is:%f",ans);	
//	return 0;
//}
//float area_of_circle(float r)
//{
//	int a;
//	a=pi*r*r;
//	return a;
//}
//=======================================================================================================
//Category 2:(Using Function with return type without parameter values.)
//#include<stdio.h>
//const float pi=3.14;
//float area_of_circle();
//int main()
//{
//	float ans;
//	ans=area_of_circle();
//	printf("The area of cirlce is:%f",ans);	
//	return 0;
//}
//float area_of_circle()
//{
//	float r,a;
//	printf("Enter the radius of circle:");
//	scanf("%f",&r);
//	a=pi*r*r;
//	return a;
//}
//=======================================================================================================
//Category 3:(Using Function without return type with parameter values.)
//#include<stdio.h>
//const float pi=3.14;
//void area_of_circle(float);
//int main()
//{
//	float r,ans;
//	printf("Enter the radius of circle:");
//	scanf("%f",&r);
//	area_of_circle(r);
//	return 0;
//}
//void area_of_circle(float r)
//{
//	float a;
//	a=pi*r*r;
//	printf("The area of cirlce is:%f",a);	
//}
//=======================================================================================================
//Category 4:(Using Function without return type without parameter values.)
#include<stdio.h>
const float pi=3.14;
void area_of_circle();
int main()
{
	area_of_circle();
	return 0;
}
void area_of_circle()
{
	float r,a;
	printf("Enter the radius of circle:");
	scanf("%f",&r);
	a=pi*r*r;
	printf("The area of cirlce is:%f",a);	
}
