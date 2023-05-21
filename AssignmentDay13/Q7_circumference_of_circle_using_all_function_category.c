//7)Write a C program to find Circumference of circle

//Category 1:(Using Function with return type with parameter values.)
//#include<stdio.h>
//const float pi=3.14;
//float circum_of_circle(float);
//int main()
//{
//	float r,ans;
//	printf("Enter the radius of circle:");
//	scanf("%f",&r);
//	ans=circum_of_circle(r);
//	printf("The circumference of circle is %f",ans);
//	return 0;
//}
//float circum_of_circle(float r)
//{
//	float c;
//	c=2*pi*r;
//	return c;
//}
//=======================================================================================================
//Category 2:(Using Function with return type without parameter values.)
//#include<stdio.h>
//const float pi=3.14;
//float circum_of_circle();
//int main()
//{
//	float ans;
//	ans=circum_of_circle();
//	printf("The circumference of circle is %f",ans);
//	return 0;
//}
//float circum_of_circle()
//{
//	float r,c;
//	printf("Enter the radius of circle:");
//	scanf("%f",&r);
//	c=2*pi*r;
//	return c;
//}
//=======================================================================================================
//Category 3:(Using Function without return type with parameter values.)
//#include<stdio.h>
//const float pi=3.14;
//void circum_of_circle(float);
//int main()
//{
//	float r;
//	printf("Enter the radius of circle:");
//	scanf("%f",&r);
//	circum_of_circle(r);
//	return 0;
//}
//void circum_of_circle(float r)
//{
//	float c;
//	c=2*pi*r;
//	printf("The circumference of circle is %f",c);
//}
//=======================================================================================================
//Category 4:(Using Function without return type without parameter values.)
#include<stdio.h>
const float pi=3.14;
void circum_of_circle();
int main()
{
	circum_of_circle();
	return 0;
}
void circum_of_circle()
{
	float r,c;
	printf("Enter the radius of circle:");
	scanf("%f",&r);
	c=2*pi*r;
	printf("The circumference of circle is %f",c);
}
