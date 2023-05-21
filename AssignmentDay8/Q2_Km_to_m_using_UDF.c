//2)Write a C program to perform conversion from Kilometer to meter  
//(Using Function without return type without parameter values.).

#include<stdio.h>
void km_to_m();
int main()
{
	km_to_m();
	return 0;
}
void km_to_m()
{
	int km,ans;
	printf("Enter the distance in Kms:");
	scanf("%d",&km);
	
	ans=km*1000;
	printf("The distance in meters is:%d m",ans);
}
