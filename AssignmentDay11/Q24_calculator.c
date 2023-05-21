//24)	Write a C program to perform Calculator operation (Function with return type without parameter values).#include<stdio.h>


#include<stdio.h>
float calc_add();
float calc_sub();
float calc_mul();
float calc_div();
int main()
{
	float add,sub,mul,div;
	add=calc_add();
	printf("The addition of two number is:%f\n",add);
	sub=calc_sub();
	printf("The subtraction of two number is:%f\n",sub);
	mul=calc_mul();
	printf("The Multiplication of two number is:%f\n",mul);
	div=calc_div();
	printf("The division of two number is:%f\n",div);
	return 0;
}
float calc_add()
{
	float n1,n2,add;
	printf("\nEnter the number:");
	scanf("%f %f",&n1,&n2);
	add=n1+n2;
	return add;
}
float calc_sub()
{
	float n1,n2,sub;
	printf("\nEnter the number:");
	scanf("%f %f",&n1,&n2);
	sub=n1-n2;
	return sub;
}
float calc_mul()
{
	float n1,n2,mul;
	printf("\nEnter the number:");
	scanf("%f %f",&n1,&n2);
	mul=n1*n2;
	return mul;
}
float calc_div()
{
	float n1,n2,div;
	printf("\nEnter the number:");
	scanf("%f %f",&n1,&n2);
	div=n1/n2;
	return div;
}


