//10)Write a C program to find Sum of all odd numbers between 1 to n.

//Category 1:(Using Function with return type with parameter values.)
#include<stdio.h>
int sum_1_to_n(int);
int main()
{
	int n,ans;
	printf("Enter the number:");
	scanf("%d",&n);
	ans=sum_1_to_n(n);
	printf("The addition all odd num from 1 to n is:%d",ans);	
	return 0;
}
int sum_1_to_n(int n)
{
	int s=0,i;
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		s=s+i;
	}
	return s;
}
//=======================================================================================================
//Category 2:(Using Function with return type without parameter values.)
//#include<stdio.h>
//int sum_1_to_n();
//int main()
//{
//	int ans;
//	ans=sum_1_to_n();
//	printf("The addition all odd num from 1 to n is:%d",ans);	
//	return 0;
//}
//int sum_1_to_n()
//{
//	int n,s=0,i;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		if(i%2!=0)
//		s=s+i;
//	}
//	return s;
//}
//=======================================================================================================
//Category 3:(Using Function without return type with parameter values.)
//#include<stdio.h>
//void sum_1_to_n(int);
//int main()
//{
//	int n;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	sum_1_to_n(n);
//	return 0;
//}
//void sum_1_to_n(int n)
//{
//	int s=0,i;
//	for(i=1;i<=n;i++)
//	{
//		if(i%2!=0)
//		s=s+i;
//	}
//	printf("The addition all odd num from 1 to n is:%d",s);	
//}
//=======================================================================================================
//Category 4:(Using Function without return type without parameter values.)
//#include<stdio.h>
//void sum_1_to_n();
//int main()
//{
//	sum_1_to_n();
//	return 0;
//}
//void sum_1_to_n()
//{
//	int n,s=0,i;
//	printf("Enter the number:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		if(i%2!=0)
//		s=s+i;
//	}
//	printf("The addition all odd number from 1 to n is:%d",s);	
//}

