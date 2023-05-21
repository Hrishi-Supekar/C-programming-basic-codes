//7)Write a C program to perform conversion from Kilometer to meter 
//(Using Function without return type with parameter values)

#include<stdio.h>
void km_to_m(int);
int main()
{	
	int km;
	printf("Enter the distance in Kms:");
	scanf("%d",&km);
	km_to_m(km);
	
	return 0;
}
void km_to_m(int km)
{
	int ans;
	ans=km*1000;
	printf("The distance in meters is:%d m",ans);
}
