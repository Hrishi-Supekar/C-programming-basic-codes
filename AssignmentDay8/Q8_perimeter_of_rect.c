//8)Write a C program to find Perimeter of rectangle 
//(Using Function without return type without parameter values.).

#include<stdio.h>
void perimeter_of_rect();
int main()
{
	perimeter_of_rect();
	return 0;
}
void perimeter_of_rect()
{
	float l,w;
	printf("Enter the length and width:");
	scanf("%f %f",&l,&w);
	
	printf("The perimeter of rectangle is :%f",(2*(l+w)));
}

