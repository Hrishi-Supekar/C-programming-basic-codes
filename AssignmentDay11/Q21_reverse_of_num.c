//21)	Write a C program to find reverse of given number(Function with return type without parameter values).


#include<stdio.h>
int reverse_of_num();
int main()
{
	int ans;
	ans=reverse_of_num();
	printf("The reverse of number is:%d",ans);
	return 0;
}
int reverse_of_num()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int i,temp=0,r;
	for(i=0;n>0;i++)
	{
		r=n%10;
		temp=(temp*10)+r;
		n=n/10;
	}
	return temp;
}
