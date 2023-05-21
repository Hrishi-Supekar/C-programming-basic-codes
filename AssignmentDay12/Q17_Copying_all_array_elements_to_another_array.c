//17)Write a C program to copy all elements from an array to another array.

#include<Stdio.h>
int main()
{
	int a[30],b[30],n,i,j,temp;
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
	printf("\nThe copied array elements are:");
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		printf("%d ",b[i]);
	}
	return 0;
}
