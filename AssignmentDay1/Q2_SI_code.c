//WAP to calculate Simple interest.
//si=prn/100;
#include<stdio.h>
int main()
{
	int p,r,n,SI;
	printf("Enter the principal amount:");
	scanf("%d",&p);
	printf("Enter the ROI:");
	scanf("%d",&r);
	printf("Enter the no of year:");
	scanf("%d",&n);
	SI = (p*r*n)/100;
	printf("The simple interest is:%d",SI);
	return 0;
}
