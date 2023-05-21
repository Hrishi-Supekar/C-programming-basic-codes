//14)Write a C program to print following pattern
//ABCDE
//BCDE
//CDE
//DE
//E


#include<stdio.h>
int main()
{
	int i,j,n,x;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		x=64+i;
		for(j=n;j>=i;j--)
		{
			printf("%c",x++);
		}
		printf("\n");
	}
}
