//3.Write a C program to print all alphabets from a to z. - using while loop

#include<stdio.h>
void main()
{
	int i=97;
	printf("Alphabet from a - z:\n");
	while(i<=122)
	{
		printf("%c ",i);
		i++;
	}
}
