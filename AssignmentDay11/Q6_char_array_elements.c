//6)	Write a C program to accept and display character array.

//#include<stdio.h>
//int main()
//{
//	char a[10];
//	int i,n;
//	printf("Enter the number of elements to be added in array:");
//	scanf("%d",&n);
//	
//	for(i=0;i<n;i++)
//	{
//		printf("\nEnter the elements to be added in array:");
//		scanf(" %c",&a[i]);
//	}
//	printf("\nThe array elements are:");
//	for(i=0;i<n;i++)
//	{
//		printf("%c ",a[i]);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	char a[10];
	printf("Enter the string to be added in array:");
	scanf("%s",a);
	printf("The array is:%s",a);
	return 0;	
}
