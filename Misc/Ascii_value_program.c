#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	printf("The ASCII value of the %c is: %d",ch,ch);
	return 0;	
}

//#include<stdio.h>
//int main()
//{
//	int k;
//	for(k=0;k<=255;k++)
//	{
//		printf("The ASCII value of %c is %d.\n",k,k);
//	}
//	return 0;
//}
