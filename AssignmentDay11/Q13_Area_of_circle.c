//13)	Write a C program to find Area of circle(Function with return type without parameter values).


#include<stdio.h>
const float pi=3.14;
float area_of_circle();
int main()
{
	float ans;
	ans=area_of_circle();
	printf("The area of circle is :%f",ans);
	return 0;
}
float area_of_circle()
{
	float r,ans;
	printf("Enter the radius of circle:");
	scanf("%f",&r);
	ans=pi*r*r;
	return ans;
}
