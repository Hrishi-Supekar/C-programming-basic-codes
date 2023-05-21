//3)	Write a C program to search element in array.

#include<stdio.h>
int main()
{
	int a[10],i,n,num,cnt=0;
	printf("Enter the number of elements to be added in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the elements to be added in array:");
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&num);
		
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			cnt++;
		}
	}
	if(cnt==0)
	{
		printf("Element not found in array!!!");
	}
	else
	{
		printf("Element found in array!!!");
	}
	return 0;
}
