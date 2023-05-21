//1.Write a C program to read and print all elements of array. 

#include<stdio.h>
int main()
{
	int i,n,arr[10];
	printf("Enter the number of elements in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the element to add in array:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nThe array element at arr[%d]:%d",i,arr[i]);
	}
	return 0;	
}
