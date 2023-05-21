//WAP which calculate speed for time and distance.
//Speed=(distance/time)

#include<stdio.h>
int main()
{
	float d,t,s;
	printf("Enter the distance:");
	scanf("%f",&d);
	printf("Enter the time:");
	scanf("%f",&t);
	s = (d/t);
	printf("The speed is:%f",s);
	return 0;
}
