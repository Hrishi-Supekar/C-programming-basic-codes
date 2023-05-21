//****
//***
//**
//*

//#include<stdio.h>
//int main()
//{
//	int i,j,n;
//	printf("Enter the no:");
//	scanf("%d",&n);
//	
//	for(i=0;i<n;i++)
//	{
//		for(j=n;j>i;j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//========================================
//*
//***
//*****
//*******

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the no:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<=i;j++)
		{
//			if(i%2==0)
				printf("*");
		}
		printf("\n");	
		}
	}
}
//========================================
//1
//12
//123
//1234

//#include<stdio.h>
//int main()
//{
//	int i,j,n;
//	printf("Enter the no:");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",j);
//		}
//		printf("\n");	
//	}
//}

//=========================================
//1
//22
//333
//4444

//#include<stdio.h>
//int main()
//{
//	int i,j,n;
//	printf("Enter the no:");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",i);
//		}
//		printf("\n");	
//	}
//}

//=========================================
//1
//01
//101
//0101
//
//#include<stdio.h>
//int main()
//{
//	int i,j,n;
//	printf("Enter the no:");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			if((i+j)%2==0)
//				printf("1");
//			else
//				printf("0");
//		}
//		printf("\n");	
//	}
//}

//=========================================
//1
//23
//456
//78910

//#include<stdio.h>
//int main()
//{
//	int i,j,n,sum=1;
//	printf("Enter the no:");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",sum++);
//		}
//		printf("\n");	
//	}
//}


//=========================================
//1
//35
//7911
//13151719

//#include<stdio.h>
//int main()
//{
//	int i,j,n,sum=1;
//	printf("Enter the no:");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",sum);
//			sum=sum+2;
//		}
//		printf("\n");	
//	}
//}

//=========================================
//A
//AB
//ABC
//ABCD

//#include<stdio.h>
//int main()
//{
//	int i,j,n,c;
//	printf("Enter the no:");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++)
//	{
//		c=65;
//		for(j=1;j<=i;j++)
//		{
//			printf("%c",c);
//			c++;
//		}
//		printf("\n");	
//	}
//}

//=========================================
//A
//C E
//G I K
//M O Q S
//#include<stdio.h>
//int main()
//{
//	int i,j,n,c=65;
//	printf("Enter the no:");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%c ",c);
//			c=c+2;
//		}
//		printf("\n");	
//	}
//}

//=========================================
//ABCDE
//BCDE
//CDE
//DE
//E
//#include<stdio.h>
//int main()
//{
//	int i,j,n,c;
//	printf("Enter the no:");
//	scanf("%d",&n);
//	
//	for(i=0;i<n;i++)
//	{
//		c=65+i;
//		for(j=n;j>i;j--)
//		{
//			printf("%c ",c);
//			c++;
//		}
//		printf("\n");	
//	}
//}
