//WAP to create a structure student with data member student ID,name,marks.Perform the following operation:
//1.Initilzation & variable creation.
//2.Accept the input from user & display the records for 5 students.
//3.Create a nested structure address with data members -- city,state,country inside student structure.

#include<stdio.h>
struct books
{
	int ID;
	char name[30];
	int price;
	
	struct type
	{
		char genre[50];
	}t;
}b;
int main()
{
	struct books b[100];
	int i,n;
	printf("Enter the no of books:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter the books details-- ID,Name,price,genre:");
	scanf("%d %s %d %s",&b[i].ID,b[i].name,&b[i].price,b[i].t.genre);
	}
	for(i=0;i<n;i++)
	{
	printf("\nThe details of books %d :",i+1);
	printf("\nbook ID:%d",b[i].ID);
	printf("\nbook name:%s",b[i].name);
	printf("\nbook price:%d",b[i].price);
	printf("\nbook genre:%s",b[i].t.genre);
	}
	return 0;
}

