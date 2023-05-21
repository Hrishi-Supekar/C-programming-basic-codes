//9)Write a C program to find Cube of given number 
//(Using Function without return type with parameter values).

#include<stdio.h>
void cube_of_number(int);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	cube_of_number(n);
	return 0;
}
void cube_of_number(int n)
{
	int ans;
	ans=n*n*n;
	printf("The cube of number is:%d",ans);
}
