//18)Write a C program to search element in array.


#include<stdio.h>
int main()
{
	int a[30],n,i,j,cnt=0;
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
	printf("\nEnter the element to be searched:");
	scanf("%d",&j);
	for(i=0;i<n;i++)
	{
		if(a[i]==j)
		{	
			cnt++;
		}
	}
	if(cnt==0)
	{
		printf("\nThe elements not found in array!!!");
	}
	else
	{
		printf("The element found in array!!");
	}
}
