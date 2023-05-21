//12)	Write a C program to find Cube of given number (Function with return type without parameter values).

#include<stdio.h>
int cube_of_number();
int main()
{
	int ans;
	ans=cube_of_number();
	printf("The cube of number is:%d",ans);
	return 0;
}
int cube_of_number()
{
	int n,ans;
	printf("Enter the number:");
	scanf("%d",&n);
	ans=n*n*n;
	return ans;
}
