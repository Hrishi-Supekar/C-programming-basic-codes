//Write a C program to check whether a year is leap year or not.

// #include<stdio.h>
// int main()
// {
// 	int year;
// 	printf("Enter the year to check:");
// 	scanf("%d",&year);
	
// 	if(year % 400 == 0)
// 	{
// 		printf("The year %d is a leap year",year);
// 	}
// 	else if(year % 100==0 && year %400 != 0)
// 	{
// 		printf("The year %d is not a leap year",year);
// 	}
// 	else if(year % 4 == 0)
// 	{
// 		printf("The year %d is leap year",year);
// 	}
// 	else
// 	{
// 		printf("The year %d is not a leap year",year);
// 	}
// 	return 0;
// }

#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	
	if(year%4==0 && year%100!=0 || year%400==0)
	printf("The year is leap year!");
	else
	printf("The year is not leap year!");
	return 0;
}
