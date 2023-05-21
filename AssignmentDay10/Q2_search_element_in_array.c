//2.Write a C program to search an element in an array.

#include<stdio.h>
int main()
{
	int n,i,a[10],num,cnt=0;
	printf("Enter the number of element in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the number to add in array a[i]:",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be searched in array:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			cnt++;
		}
	}
	if(cnt==0)
		{
			printf("The number not found!!");
		}
		else
		{
			printf("The number found!!");
		}
	return 0;
}
