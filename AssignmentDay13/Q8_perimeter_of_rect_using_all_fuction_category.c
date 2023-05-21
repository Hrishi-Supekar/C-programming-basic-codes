//8)Write a C program to find Perimeter of rectangle

//Category 1:(Using Function with return type with parameter values.)
//#include<stdio.h>
//float perimeter_of_rect(float,float);
//int main()
//{
//	float l,w,ans;
//	printf("Enter the length:");
//	scanf("%f",&l);
//	printf("Enter the width:");
//	scanf("%f",&w);
//	ans=perimeter_of_rect(l,w);
//	printf("The perimeter of rectangle is %f",ans);
//	return 0;
//}
//float perimeter_of_rect(float l, float w)
//{
//	float p;
//	p=2*(l+w);
//	return p;
//}
//=======================================================================================================
//Category 2:(Using Function with return type without parameter values.)
//#include<stdio.h>
//float perimeter_of_rect();
//int main()
//{
//	float ans;
//	ans=perimeter_of_rect();
//	printf("The perimeter of rectangle is %f",ans);
//	return 0;
//}
//float perimeter_of_rect()
//{
//	float l,w,p;
//	printf("Enter the length:");
//	scanf("%f",&l);
//	printf("Enter the width:");
//	scanf("%f",&w);
//	p=2*(l+w);
//	return p;
//}
//=======================================================================================================
//Category 3:(Using Function without return type with parameter values.)
//#include<stdio.h>
//void perimeter_of_rect(float,float);
//int main()
//{
//	float l,w;
//	printf("Enter the length:");
//	scanf("%f",&l);
//	printf("Enter the width:");
//	scanf("%f",&w);
//	perimeter_of_rect(l,w);
//	return 0;
//}
//void perimeter_of_rect(float l,float w)
//{
//	float p;
//	p=2*(l+w);
//	printf("The perimeter of rectangle is %f",p);
//}
//=======================================================================================================
//Category 4:(Using Function without return type without parameter values.)
#include<stdio.h>
void perimeter_of_rect();
int main()
{
	perimeter_of_rect();
	return 0;
}
void perimeter_of_rect()
{
	float l,w,p;
	printf("Enter the length:");
	scanf("%f",&l);
	printf("Enter the width:");
	scanf("%f",&w);
	p=2*(l+w);
	printf("The perimeter of rectangle is %f",p);
}
