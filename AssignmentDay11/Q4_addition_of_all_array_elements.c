//4)	Write a C program to find sum of all elements of an array.

#include<stdio.h>
int main()
{
	int a[10],i,n,sum=0;
	printf("Enter the number of elements to be added in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements to be added in array:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("The addition of array element are:%d",sum);	
	return 0;
}
