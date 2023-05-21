//16)Write a C program to perform Calculator operation 
//(Using Function without return type without parameter values.).

#include<stdio.h>
void calc_add();
void calc_sub();
void calc_mul();
void calc_div();
int main()
{
	calc_add();
	calc_sub();
	calc_mul();
	calc_div();
	return 0;
}
void calc_add()
{
	int n1,n2;
	printf("\nEnter the number:");
	scanf("%d %d",&n1,&n2);
		
	printf("The addition of two number is:%d\n",(n1+n2));
}
void calc_sub()
{
	int n1,n2;
	printf("\nEnter the number:");
	scanf("%d %d",&n1,&n2);
		
	printf("The subtraction of two number is:%d\n",(n1-n2));
}
void calc_mul()
{
	int n1,n2;
	printf("\nEnter the number:");
	scanf("%d %d",&n1,&n2);
		
	printf("The Multiplication of two number is:%d\n",(n1*n2));
}
void calc_div()
{
	int n1,n2;
	printf("\nEnter the number:");
	scanf("%d %d",&n1,&n2);
		
	printf("The division of two number is:%d\n",(n1/n2));
}
