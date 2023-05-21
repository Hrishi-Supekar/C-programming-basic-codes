//WAP to demonstrate arithmetic operation on two integer numbers.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the 1st number:");
	scanf("%d",&a);
	printf("Enter the 2nd number:");
	scanf("%d",&b);
	
	printf("The Arithematic Operation are:\n");
	printf("Addition:%d\n",a+b);
	printf("subtraction:%d\n",a-b);
	printf("Division:%d\n",a/b);
	printf("Multiplication:%d\n",a*b);
	printf("Modulus:%d",a%b);
	return 0;
}

