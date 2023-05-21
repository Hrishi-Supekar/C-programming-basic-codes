//9.Write a C program to find sum of all array elements.

#include<stdio.h>
int main()
{
	int n,i,a[10],sum=0;
	printf("Enter the number of elements to be added in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the number to add in array a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("The addtion of all elements of array is:%d",sum);
	return 0;
}
