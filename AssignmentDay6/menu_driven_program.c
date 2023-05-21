//write a menu driven program to print 1.Area of circle 2.square of no 3.cube of no

#include<stdio.h>
const float pi=3.14;
int main()
{
	int n,ch,sq,cube;
	float r,area;
	char c;
	do
	{
		printf("\nThe below choices for menu driven program:\n1.Area of Circle.\n2.Square of number.\n3.Cube of number.\n4.Exit\n");
		printf("Enter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					printf("Enter the radius of circle:");
					scanf("%f",&r);
					area=pi*r*r;
					printf("The area of circle is:%f\n",area);
					break;
				}
			case 2:
				{
					printf("Enter the number:");
					scanf("%d",&n);
					sq=n*n;
					printf("The square of number is:%d\n",sq);
					break;
				}
			case 3:
				{
					printf("Enter the number:");
					scanf("%d",&n);
					cube=n*n*n;
					printf("The cube of number is:%d\n",cube);
					break;
				}
			case 4:
				{	
					printf("Do you want to Exit??\n");
					printf("Enter your choice(y or n):");
					scanf(" %c",&c);
					if(c=='y'||c=='Y')
					{
						printf("Thankyou!!\n");	
					}
					else
						ch=1;
					break;
				}
			default:
				printf("Invalid choice please enter correct choice!!!\n");
		}
	}while(ch!=4);
}
