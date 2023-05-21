#include<stdio.h>
//#include<math.h>
int main()
{
	float pi = 3.14;
	float r;
	float aoc;
	printf("Enter the radius of circle:");
	scanf("%f",&r);
//	aoc= pi*(pow(r,2));
	aoc = pi*r*r;
	printf("The area of circle is:%f",aoc);
	return 0;	 
}
