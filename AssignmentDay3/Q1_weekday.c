//1.	Write a C program to input week number and print week day.

#include<stdio.h>
int main()
{
	int weeknum;
	printf("Enter the weeknum:");
	scanf("%d",&weeknum);
	
	switch(weeknum)
	{
		case 1:
			printf("The weekday is Monday");
			break;
		case 2:
			printf("The weekday is Tuesday");
			break;
		case 3:
			printf("The weekday is Wednesday");
			break;
		case 4:
			printf("The weekday is Thursday");
			break;
		case 5:
			printf("The weekday is Friday");
			break;
		case 6:
			printf("The weekday is Saturday");
			break;
		case 7:
			printf("The weekday is Sunday");
			break;
	}
	return 0;	
}
