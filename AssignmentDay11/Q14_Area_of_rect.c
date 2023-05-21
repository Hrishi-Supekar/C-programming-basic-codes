//14)	Write a C program to find Area of rectangle(Function with return type without parameter values).


#include<stdio.h>
float area_of_rect();
int main()
{
	float ans;
	ans=area_of_rect();
	printf("The area of rectangle is :%f",ans);
	return 0;
}
float area_of_rect()
{
	float l,w,ans;
	printf("Enter the length and width:");
	scanf("%f %f",&l,&w);
	ans = (l*w);
	return ans;
}
