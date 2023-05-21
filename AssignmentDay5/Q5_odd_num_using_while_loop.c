//5)Write a C program to print all odd number between 1 to 100.

#include<stdio.h>
void main()
{
	int num=1;
	while(num<=100)
	{
		if(num%2!=0)
		{
		printf("%d ",num);
		}
		num++;
	}
}

