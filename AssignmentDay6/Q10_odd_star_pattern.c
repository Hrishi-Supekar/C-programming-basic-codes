//10)Write a C program to print following pattern
//*
//***
//*****
//*******

// #include<stdio.h>
// int main()
// {
// 	int i,j,n,x=1;
// 	printf("Enter the number:");
// 	scanf("%d",&n);
	
// 	for(i=0;i!=n;i++)
// 	{
// 		for(j=1;j<=x;j++)
// 		{
// 			if(x%2!=0)
// 				printf("*");
// 		}
// 		printf("\n");
// 		x=x+2;
// 	}
// 	return 0;
// }

//10)Write a C program to print following pattern
//*
//***
//*****
//*******

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number:");
	scanf("%d",&n);
	n=(2*n);
	
	for(i=1;i<=n;i=i+2)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

//10)Write a C program to print following pattern
//*
//***
//*****
//*******

//#include<stdio.h>
//int main()
//{
//	int i,j,n,k=0;
//	printf("Enter the no:");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++,k=0)
//	{
//		for(j=1;j<=n-i;j++)
//		{
//			printf("");
//		}
//		while(k!=2*i-1)
//		{
//			printf("*");
//			++k;
//		}
//		printf("\n");
//	}
//	return 0;
//}

