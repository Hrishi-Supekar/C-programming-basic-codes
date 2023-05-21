#include<stdio.h>
int no_of_digit();
int main()
{
	int ans;
	ans=no_of_digit();
	printf("The count of digit in a number is:%d",ans);
	return 0;
}
int no_of_digit()
{
	int n,cnt=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		cnt++;
	}
	return cnt;
}
