//Q1)Write a C program to perform Addition of two numbers.

//Category 1:(Using Function with return type with parameter values.)
//#include<stdio.h>
//int add(int,int);
//int main()
//{
//	int a,b,ans;
//	printf("Enter the two numbers:");
//	scanf("%d %d",&a,&b);
//	ans=add(a,b);
//	printf("The addition of two numbers %d & %d is:%d",a,b,ans);
//	return 0;
//}
//int add(int a,int b)
//{
//	int c;
//	c=a+b;
//	return c;
//}
//============================================================================================
//Category 2:(Using Function with return type without parameter values.)
//#include<stdio.h>
//int add();
//int main()
//{
//	int ans;
//	ans=add();
//	printf("The addition of two numbers is:%d",ans);
//	return 0;
//}
//int add()
//{
//	int a,b,c;
//	printf("Enter the two numbers:");
//	scanf("%d %d",&a,&b);
//	c=a+b;
//	return c;
//}

//============================================================================================
//Category 3:(Using Function without return type with parameter values.)
//#include<stdio.h>
//void add(int,int);
//int main()
//{
//	int a,b,c;
//	printf("Enter the two numbers:");
//	scanf("%d %d",&a,&b);
//	add(a,b);
//	return 0;
//}
//void add(int a,int b)
//{
//	int c;
//	c=a+b;
//	printf("The value of addition of 2 number is:%d",c);
//}

//============================================================================================
//Category 4:(Using Function without return type without parameter values.)
#include<stdio.h>
void add();
int main()
{
	add();
	return 0;
}
void add()
{
	int a,b,c;
	printf("Enter the two numbers:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("The value of addition of 2 number is:%d",c);
}

