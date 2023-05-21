//12)Write a C program to find Sum of digits of given number

//Category 1:(Using Function with return type with parameter values.)
//#include<stdio.h>
//int sum_of_digit(int);
//int main()
//{
//	int n,ans;
//	printf("Enter the value of n:");
//	scanf("%d",&n);
//	ans=sum_of_digit(n);
//	printf("The addition of numbers is %d",ans);
//	return 0;
//}
//int sum_of_digit(int n)
//{
//	int s=0,r;
//	while(n>0)
//	{
//		r=n%10;
//		s=s+r;
//		n=n/10;
//	}
//	return s;
//}
//=======================================================================================================
//Category 2:(Using Function with return type without parameter values.)
//#include<stdio.h>
//int sum_of_digit();
//int main()
//{
//	int ans;
//	ans=sum_of_digit();
//	printf("The addition of numbers is %d",ans);
//	return 0;
//}
//int sum_of_digit()
//{
//	int n,s=0,r;
//	printf("Enter the value of n:");
//	scanf("%d",&n);
//	while(n>0)
//	{
//		r=n%10;
//		s=s+r;
//		n=n/10;
//	}
//	return s;
//}
//=======================================================================================================
//Category 3:(Using Function without return type with parameter values.)
//#include<stdio.h>
//void sum_of_digit(int);
//int main()
//{
//	int n;
//	printf("Enter the value of n:");
//	scanf("%d",&n);
//	sum_of_digit(n);
//	return 0;
//}
//void sum_of_digit(int n)
//{
//	int s=0,r;
//	while(n>0)
//	{
//		r=n%10;
//		s=s+r;
//		n=n/10;
//	}
//	printf("The addition of numbers is %d",s);
//}
//=======================================================================================================
//Category 4:(Using Function without return type without parameter values.)
#include<stdio.h>
void sum_of_digit();
int main()
{
	
	sum_of_digit();
	return 0;
}
void sum_of_digit()
{
	int n,s=0,r;
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("The addition of numbers is %d",s);
}
