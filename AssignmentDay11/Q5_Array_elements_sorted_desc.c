//5)	Write a C program for sorting element in array in descending array.

#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp;
	printf("Enter the number of elments in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the elements to be added at a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nThe array elements in ascending order is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);	
	}
	return 0;
}
