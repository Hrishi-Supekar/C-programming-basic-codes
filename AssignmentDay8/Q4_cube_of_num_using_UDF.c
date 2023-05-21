//4)Write a C program to find Cube of given number 
//(Using Function without return type without parameter values.).

#include<stdio.h>
void cube_of_number();
int main()
{
	cube_of_number();
	return 0;
}
void cube_of_number()
{
	int n,ans;
	printf("Enter the number:");
	scanf("%d",&n);
	
	ans=n*n*n;
	printf("The cube of number is:%d",ans);
}
