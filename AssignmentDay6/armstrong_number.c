//WAP to check weather a number is Armstrong number or not.
//370=(3*3*3)+(7*7*7)+(0*0*0)

#include<stdio.h>
void main()
{
	int x,i,re,j,base,r,sum=0,temp,n,cnt=0;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	x=n;
	while(n>0)
	{
		n=n/10;
		cnt++;
	}
//	printf("%d\n",cnt);
	
	for(i=0;i<cnt;i++)
	{
		base=x%10;
		r=base;
		for(j=1;j<cnt;j++)
			{
				re = r*base;
				r=re;
			}
		sum=sum+re;
		x=x/10;
	}
//	printf("%d\n",sum);	
	if(temp==sum)
	{
		printf("The number is Armstrong!!!");
	}
	else
	{
		printf("The number is not Armstrong!!");
	}
}
