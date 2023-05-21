//2.	Write a C program to input month number and print number of days in that month.

#include<stdio.h>
int main()
{
	int month;
	printf("Enter the month number to check days:");
	printf("\n1.Jan\n2.Feb\n3.Mar\n4.Apr\n5.May\n6.June\n7.July\n8.Aug\n9.Sep\10.Oct\n11.Nov\n12.Dec\n");
	printf("Choice=");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1:
			printf("The number of days in Jan 31 days");
			break;
		case 2:
			printf("The number of days in Feb 28 or 29 days");
			break;
		case 3:
			printf("The number of days in Mar 31 days");
			break;
		case 4:
			printf("The number of days in Apr 30 days");
			break;
		case 5:
			printf("The number of days in May 31 days");
			break;
		case 6:
			printf("The number of days in Jun 30 days");
			break;
		case 7:
			printf("The number of days in Jul 31 days");
			break;
		case 8:
			printf("The number of days in Aug 31 days");
			break;
		case 9:
			printf("The number of days in Sep 30 days");
			break;
		case 10:
			printf("The number of days in Oct 31 days");
			break;
		case 11:
			printf("The number of days in Nov 30 days");
			break;
		case 12:
			printf("The number of days in Dec 31 days");
			break;
		default:
			printf("Enter the vaild month number!!!")
	}
	return 0;
}
