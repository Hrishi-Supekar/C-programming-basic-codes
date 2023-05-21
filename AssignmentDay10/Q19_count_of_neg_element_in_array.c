//19.Write a C program to count total number of negative elements in an array.

#include<stdio.h>
int main()
{
	int n,i,a[10],cnt=0;
	printf("Enter the number of elements to be added in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the number to add in array:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			cnt++;	
		}
	}
	printf("\nThe count of -ve numbers of array is:%d",cnt);
	return 0;
}
