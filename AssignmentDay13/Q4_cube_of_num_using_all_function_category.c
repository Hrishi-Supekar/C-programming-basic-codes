//Q4)Write a C program to find Cube of given number

//Category 1:(Using Function with return type with parameter values.)
//#include<stdio.h>
//int cube_of_no(int);
//int main()
//{
//	int n,ans;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	ans=cube_of_no(n);
//	printf("The cube of number %d is:%d",n,ans);	
//	return 0;
//}
//int cube_of_no(int n)
//{
//	int p;
//	p=n*n*n;
//	return p;
//}
//=======================================================================================================
//Category 2:(Using Function with return type without parameter values.)
//#include<stdio.h>
//int cube_of_no();
//int main()
//{
//	int ans;
//	ans=cube_of_no();
//	printf("The cube of number is:%d",ans);	
//	return 0;
//}
//int cube_of_no()
//{
//	int n,p;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	p=n*n*n;
//	return p;
//}
//=======================================================================================================
//Category 3:(Using Function without return type with parameter values.)
//#include<stdio.h>
//void cube_of_no(int);
//int main()
//{
//	int n;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	cube_of_no(n);
//	return 0;
//}
//void cube_of_no(int n)
//{
//	int p;
//	p=n*n*n;
//	printf("The cube of number %d is:%d",n,p);	
//}
//=======================================================================================================
//Category 4:(Using Function without return type without parameter values.)
#include<stdio.h>
void cube_of_no();
int main()
{
	cube_of_no();
	return 0;
}
void cube_of_no()
{
	int n,p;
	printf("Enter the number:");
	scanf("%d",&n);
	p=n*n*n;
	printf("The cube of number %d is:%d",n,p);	
}
