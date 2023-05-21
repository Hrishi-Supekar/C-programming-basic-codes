//4.Write a C program to print all elements in an array which are at odd index.

#include<stdio.h>
int main()
{
	int n,i,a[10];
	printf("Enter the number of elements to be added in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the number to add in array a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			printf("\nThe numbers in odd index of array is:%d",a[i]);
		}
	}
	return 0;
}
