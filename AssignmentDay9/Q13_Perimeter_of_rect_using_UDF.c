//13)Write a C program to find Perimeter of rectangle
//(Using Function without return type with parameter values).

#include<stdio.h>
void perimeter_of_rect(float,float);
int main()
{
		float l,w;
	printf("Enter the length and width:");
	scanf("%f %f",&l,&w);
	perimeter_of_rect(l,w);
	return 0;
}
void perimeter_of_rect(float l,float w)
{
	printf("The perimeter of rectangle is :%f",(2*(l+w)));
}
