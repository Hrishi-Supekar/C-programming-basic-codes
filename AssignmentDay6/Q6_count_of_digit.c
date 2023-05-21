//6)Write a C program to count number of digits in a number.

#include<stdio.h>
int main()
{
	int i,n,cnt=1;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		n=n/10;
		cnt++;
	}
	printf("The count of digit is %d",cnt);
	return 0;
}

