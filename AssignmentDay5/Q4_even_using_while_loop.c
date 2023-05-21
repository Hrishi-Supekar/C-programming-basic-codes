//4)Write a C program to print all even numbers between 1 to 100. - using while loop


#include<stdio.h>
void main()
{
	int num=1;
	while(num<=100)
	{
		if(num%2==0)
		{
		printf("%d ",num);
		}
		num++;
	}
}

