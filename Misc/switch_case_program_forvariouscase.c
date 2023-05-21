//WAP menu program to perform following operations
//1. Accept the number from user find out sqaure and cube 
//2. To check whether a year leap year or not
//3. To check whether alphabet is vowels or consonants if user enter wrong chocie display appropriate message

#include<stdio.h>
int main()
{
	int ch;
	printf("Enter the choice:");
	printf("\n1.To calculate sq and cube of number.\n2.To check leap year or not.\n3.To check if alphabet vowel or consonant.\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			{
				int num;
				printf("Enter the number:");
				scanf("%d",&num);
				printf("The square of number %d is:%d\n",num,num*num);
				printf("The cube of number %d is:%d\n",num,num*num*num);
				break;
			}	
		case 2:
			{
				int year;
				printf("Enter the year:");
				scanf("%d",&year);
				
				if(year%4==0 && year%100!=0)
				printf("%d is Leap year!!!",year);
				else
				printf("%d is not leap year!!!",year);
				break;			
			}
		case 3:
			{
				char cha;
				printf("Enter the Alphabet:");
				scanf(" %c",&cha);
				
				if(cha=='A'||cha=='a'||cha=='E'||cha=='e'||cha=='I'||cha=='i'||cha=='O'||cha=='o'||cha=='U'||cha=='u')
				printf("The alphabet is a vowel!!!");
				else
				printf("The alphabet is a consonant!!!");
				break;
			}
		default:
		printf("Please enter correct choice!!");
		break;
	}
	return 0;
}
