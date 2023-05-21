//15.Write a C program to find minimum element in an array.

#include<stdio.h>
int main()
{
	int n,i,a[10],min;
	printf("Enter the number of elements to be added in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the number to add in array:");
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("The min element of array is:%d",min);
	return 0;
}
