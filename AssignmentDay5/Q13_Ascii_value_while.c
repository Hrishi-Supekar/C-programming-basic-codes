//13)Write a C program to print all ASCII character with their values.

#include<stdio.h>
void main()
{
	int n=0;
	printf("The all ASCII values are:");
	while(n<255)
	{
		printf("%c ",n);
		n++;
	}
}

