//WAP for basic calculator using switch-case

#include<stdio.h>
int main()
{
	char ch;
	int a,b,c;
	printf("Enter the choice of calculation:\n");
	printf("1.Addition\n2.Subtraction\n3.Multiply\n4.Division\n5.Exit\n");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Enter 2 no:");
			scanf("%d %d",&a,&b);
			c=a+b;
			printf("\nSum=%d",c);
			break;
		case 2:
			printf("Enter 2 no:");
			scanf("%d %d",&a,&b);
			c=a-b;
			printf("\nDiff=%d",c);
			break;
		case 3:
			printf("Enter 2 no:");
			scanf("%d %d",&a,&b);
			c=a*b;
			printf("\nMul=%d",c);
			break;
		case 4:
			printf("Enter 2 no:");
			scanf("%d %d",&a,&b);
			c=a/b;
			printf("\nDiv=%d",c);
			break;
		case 5:
			printf("Thankyou!!");
			break;				
	}
	return 0;
}
