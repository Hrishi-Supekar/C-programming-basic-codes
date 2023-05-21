//16)	Write a C program to find Perimeter of rectangle(Function with return type without parameter values).


#include<stdio.h>
float perimeter_of_rect();
int main()
{
	float ans;
	ans = perimeter_of_rect();
	printf("The perimeter of rectangle is :%f",ans);
	return 0;
}
float perimeter_of_rect()
{
	float l,w,ans;
	printf("Enter the length and width:");
	scanf("%f %f",&l,&w);
	ans=(2*(l+w));
	return ans;
}
