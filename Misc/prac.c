//increment(in pointer)
#include<stdio.h>
int main()
{
	char d='f';
	char *x;
	x=&d;
	printf("Value of p before inc:%u",x);
	x=x-5;
	printf("\nAddress of c=%u",&d);
	printf("\nAddress of p=%u",&x);
	printf("\nValue of c=%c",d);
	printf("\nValue of p after inc=%u",x);
	printf("\nValue of *p=%c",*x);	
	return 0;
}
