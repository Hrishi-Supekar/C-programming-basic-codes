//Q10.Write a C program to check whether a character is uppercase or lowercase alphabet.

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character to check:");
	scanf("%c",&ch);
	
	if(ch >= 97 && ch<=122)
	{
		printf("The character is a Lower Alphabet!!");
	}
	else if(ch >= 65 && ch<=90)
	{
		printf("The character is a Upper Alphabet!!");
	}
	else
	{
		printf("The character is not a Alphabet!!");
	}
	return 0;
}
