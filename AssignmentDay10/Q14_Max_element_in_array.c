//14.Write a C program to find maximum element in an array.

#include<stdio.h>
int main()
{
	int n,i,a[10],max=0;
	printf("Enter the number of elements to be added in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the number to add in array:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("The max element of array is:%d",max);
	return 0;
}
