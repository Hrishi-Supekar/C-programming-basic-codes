//2)	Write a C program to copy all elements from an array to another array.

#include<stdio.h>
int main()
{
	int a[10],b[10],i,n;
	printf("Enter the number of elements to be added in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the elements to be added in array:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("The elements in original array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nThe elements in copied array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
