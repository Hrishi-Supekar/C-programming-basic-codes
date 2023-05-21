//18)Write a C program to find reverse of given number
//(Using Function without return type with parameter values).

#include<stdio.h>
void reverse_of_num(int);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	reverse_of_num(n);
	return 0;
}
void reverse_of_num(int n)
{
	int i,temp=0,r;
	for(i=0;n>0;i++)
	{
		r=n%10;
		temp=(temp*10)+r;
		n=n/10;
	}
	printf("The reverse of number is:%d",temp);
}
