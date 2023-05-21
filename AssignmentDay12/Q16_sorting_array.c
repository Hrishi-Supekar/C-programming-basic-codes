//16)Write a C program for sorting element in array in ascending array.

#include<stdio.h>
int main()
{
	int a[30],n,i,j,temp;
	printf("Enter the number of elements to be added in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the elements to be added @ a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("The original array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nThe sorted array elements are:");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;				
			}
		}
		printf("%d ",a[i]);	
	}		
	return 0;
}
