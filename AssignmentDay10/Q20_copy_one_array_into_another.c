//20.Write a C program to copy all elements from an array to another array.

#include<stdio.h>
int main()
{
	int n,i,a[10],b[10];
	printf("Enter the number of elements to be added in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the number to add in array:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nThe array element at a[%d]:%d",i,a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\nThe array element at b[%d]:%d",i,b[i]);
	}
	return 0;
}
