//13)Write a C program to find reverse of given number 
//(Using Function without return type without parameter values.).

#include<stdio.h>
void reverse_of_num();
int main()
{
	reverse_of_num();
	return 0;
}
void reverse_of_num()
{
	int i,temp=0,r,n;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		temp=(temp*10)+r;
		n=n/10;
	}
	printf("The reverse of number is:%d",temp);
}
