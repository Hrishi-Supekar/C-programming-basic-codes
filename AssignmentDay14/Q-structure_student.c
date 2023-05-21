//WAP to create a structure student with data member student ID,name,marks.Perform the following operation:
//1.Initilzation & variable creation.
//2.Accept the input from user & display the records for 5 students.
//3.Create a nested structure address with data members -- city,state,country inside student structure.

#include<stdio.h>
struct student
{
	int ID;
	char name[30];
	int marks;
	
	struct address
	{
		char city[50];
		char state[50];
		char country[50];
	}a;
}s;
int main()
{
	struct student s[100];
	int i,n;
	printf("Enter the no of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter the students details-- ID,Name,marks,city,state,country:");
	scanf("%d %s %d %s %s %s",&s[i].ID,s[i].name,&s[i].marks,s[i].a.city,s[i].a.state,s[i].a.country);
	}
	for(i=0;i<n;i++)
	{
	printf("\nThe details of student %d :",i+1);
	printf("\nstudent ID:%d",s[i].ID);
	printf("\nstudent name:%s",s[i].name);
	printf("\nstudents marks:%d",s[i].marks);
	printf("\nstudents city:%s",s[i].a.city);
	printf("\nstudents state:%s",s[i].a.state);
	printf("\nstudents country:%s",s[i].a.country);
	}
	return 0;
}

