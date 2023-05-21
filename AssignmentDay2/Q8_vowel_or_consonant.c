//Q8.Write a C program to input any alphabet and check whether it is vowel or consonant.

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the Alphabet:");
	scanf("%c",&ch);
	
	if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
	{
		printf("The alphabet is a vowel!!");
	}
	else
	{
		printf("The alphabet is consonant!!!");
	}
	return 0;
}
