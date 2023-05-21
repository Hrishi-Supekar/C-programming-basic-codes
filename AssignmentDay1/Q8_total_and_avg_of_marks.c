//WAP to accept five subject marks and find out total and average of the marks.

//#include<stdio.h>
//int main()
//{
//	int a,b,c,d,e,tot;
//	float avg;
//	printf("Enter the 5 subject marks:\n");
//	printf("Enter the 1st subject marks:");
//	scanf("%d",&a);
//	printf("Enter the 2nd subject marks:");
//	scanf("%d",&b);
//	printf("Enter the 3rd subject marks:");
//	scanf("%d",&c);
//	printf("Enter the 4th subject marks:");
//	scanf("%d",&d);
//	printf("Enter the 5th subject marks:");
//	scanf("%d",&e);
//	tot = (a+b+c+d+e);
//	avg = (a+b+c+d+e)/5;
//	printf("The total of all marks is:%d\n",tot);
//	printf("The avgerage of all marks is:%f\n",avg);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a,b,c,d,e,tot;
	float avg;
	printf("Enter the marks of 5 subject:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	tot = a+b+c+d+e;
	avg = tot/5;
	printf("The total of all marks is:%d\n",tot);
	printf("The avgerage of all marks is:%f\n",avg);
	return 0;
}
