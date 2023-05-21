//19)Write a C program to count number of digits in a number.

#include<stdio.h>
int main()
{
	int n,cnt=0;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The count of digit is:");
	while(n>0)
	{
		n=n/10;
		cnt++;
	}
	
	printf("%d",cnt);
	return 0;
}


