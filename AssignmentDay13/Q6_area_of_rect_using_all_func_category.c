//6)Write a C program to find Area of rectangle.

//Category 1:(Using Function with return type with parameter values.)
//#include<stdio.h>
//float area_of_rect(float,float);
//int main()
//{
//	float l,w,ans;
//	printf("Enter the length of rect:");
//	scanf("%f",&l);
//	printf("Enter the width of rect:");
//	scanf("%f",&w);
//	ans=area_of_rect(l,w);
//	printf("The area of rectangle is:%.2f",ans);
//	return 0;
//}
//float area_of_rect(float l,float w)
//{
//	float a;
//	a=l*w;
//	return a;
//}
//=======================================================================================================
//Category 2:(Using Function with return type without parameter values.)
//#include<stdio.h>
//float area_of_rect();
//int main()
//{
//	float ans;
//	ans=area_of_rect();
//	printf("The area of rectangle is:%.2f",ans);
//	return 0;
//}
//float area_of_rect()
//{
//	float l,w,a;
//	printf("Enter the length of rect:");
//	scanf("%f",&l);
//	printf("Enter the width of rect:");
//	scanf("%f",&w);
//	a=l*w;
//	return a;
//}
//=======================================================================================================
//Category 3:(Using Function without return type with parameter values.)
//#include<stdio.h>
//void area_of_rect(float,float);
//int main()
//{
//	float l,w;
//	printf("Enter the length of rect:");
//	scanf("%f",&l);
//	printf("Enter the width of rect:");
//	scanf("%f",&w);
//	area_of_rect(l,w);
//	return 0;
//}
//void area_of_rect(float l,float w)
//{
//	float ans;
//	ans=l*w;
//	printf("The area of rectangle is:%.2f",ans);
//}
//=======================================================================================================
//Category 4:(Using Function without return type without parameter values.)
#include<stdio.h>
void area_of_rect();
int main()
{
	area_of_rect();
	return 0;
}
void area_of_rect()
{
	float l,w,a;
	printf("Enter the length of rect:");
	scanf("%f",&l);
	printf("Enter the width of rect:");
	scanf("%f",&w);
	a=l*w;
	printf("The area of rectangle is:%.2f",a);
}
