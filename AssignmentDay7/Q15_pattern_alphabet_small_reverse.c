//15)Write a C program to print following pattern
//abcde
//bcde 
//cde
//de
//e


#include<stdio.h>
int main()
{
	int i,j,n,x;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		x=96+i;
		for(j=n;j>=i;j--)
		{
			printf("%c",x++);
		}
		printf("\n");
	}
}