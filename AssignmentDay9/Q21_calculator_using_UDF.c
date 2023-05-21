//21)Write a C program to perform Calculator operation 
//(Using Function without return type with parameter values).

#include<stdio.h>
void calc_add(float,float);
void calc_sub(float,float);
void calc_mul(float,float);
void calc_div(float,float);
int main()
{
	float n1,n2;
	printf("\nEnter the number:");
	scanf("%f %f",&n1,&n2);
	calc_add(n1,n2);
	calc_sub(n1,n2);
	calc_mul(n1,n2);
	calc_div(n1,n2);
	return 0;
}
void calc_add(float n1,float n2)
{
	printf("The addition of two number is:%f\n",(n1+n2));
}
void calc_sub(float n1,float n2)
{
	printf("The subtraction of two number is:%f\n",(n1-n2));
}
void calc_mul(float n1,float n2)
{
	printf("The Multiplication of two number is:%f\n",(n1*n2));
}
void calc_div(float n1,float n2)
{
	printf("The division of two number is:%f\n",(n1/n2));
}


