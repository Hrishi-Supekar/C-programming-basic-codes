//Accept two numbers and perform swapping with third variable, and without third variable
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the 2 numbers:");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("The 1st number before swap:%d\n",a);
	printf("The 2nd number before swap:%d\n",b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("The 1st number after swap:%d\n",a);
	printf("The 2nd number after swap:%d\n",b);
	return 0;
}
