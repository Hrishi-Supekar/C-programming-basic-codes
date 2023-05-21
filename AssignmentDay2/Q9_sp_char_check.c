//Q9.Write a C program to input any character and check whether it is alphabet, digit or special character.

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
	else if(ch >=48 && ch <= 57)
	{
		printf("The character is a number!!");
	}
	else 
	{
		printf("The character is a special char!!");
	}
	return 0;
}
