//3.	Write a C program to count total number of notes in given amount.

//#include<stdio.h>
//int main()
//{
//	int amount,notes;
//	printf("Enter the amount:");
//	scanf("%d",&amount);
//	printf("Enter the choice of notes:");
//	printf("\n1.500 notes\n2.200 notes\n3.100 notes\n4.50 notes\n5.20 notes\n6.10 notes\n");
//	scanf("%d",&notes);
//	
//	switch(notes)
//	{
//		case 1:
//		printf("The 500 notes are:%d",(amount/500));
//		break;	
//		case 2:
//		printf("The 200 notes are:%d",(amount/200));
//		break;
//		case 3:
//		printf("The 100 notes are:%d",(amount/100));
//		break;
//		case 4:
//		printf("The 50 notes are:%d",(amount/50));
//		break;
//		case 5:
//		printf("The 20 notes are:%d",(amount/20));
//		break;
//		case 6:
//		printf("The 10 notes are:%d",(amount/10));
//		break;
//		default:
//			printf("Enter valid notes size!!");
//	}
//	return 0;
//}
//===========================================================
//#include<stdio.h>
//void main()
//{
//	int amount,x,y,z,a,b,t,h;
//	x=y=z=a=b=0;
//	printf("Enter the amount:");
//	scanf("%d",&amount);
//	
//	if(amount>2000)
//	{
//		y=amount/1000;
//		if(y%2==0)
//		{
//			printf("2000rs notes:%d\n",y/2);
//		}
//		else
//		{
//			t=y-1;
//			printf("2000rs notes:%d\n",t/2);
//		}
//		x = amount%1000;
//		a = x/100;
//		if(a%5==0)
//		{
//			printf("%d\n",a);
//			
//		}
//		else
//		{
//			b=a-5;
//			a=a-b;
//			if(y%2==0)
//			{
//				printf("500rs notes:%d\n",(a/5));
//			}
//			else
//			{
//				printf("500rs notes:%d\n",(a/5)+2);
//			}
//		}
////		printf("%d\n",b);
//		if(b%2==0)
//		{
//			int f;
//			f=b/2;
//			printf("200rs notes :%d\n",f);
//		}
//		else 
//		{
//			h=b%2;
//			printf("200rs notes :%d\n",b/2);
//		}
//		printf("100rs notes:%d\n",h);
//		int d;
////		printf("%d\n",x);
//		z = x%100;
//		d = z/10;
////		printf("%d\n",d);
//		if(d%5==0)
//		{
//			printf("50rs notes:%d\n",d/5);
//		}
//		else if(d>5)
//		{
//			int q;
//			q=d-5;
//			printf("50rs notes:%d\n",d/5);
//			printf("10rs notes:%d\n",q);
//		}
//		else
//		{
//			printf("50rs notes:%d\n",d/5);
//			printf("10rs notes:%d\n",d%5);
//		}
//		int r;
//		r = z%10;
//		printf("Remaining coins:%d",r);
//	}
//	
//}
//===================================================================================================
//C program to count minimum number of notes in an amount

#include <stdio.h>
int main()
{
    int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;
    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;
    printf("Enter amount: ");
    scanf("%d", &amount);
    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }
    printf("Total number of notes = \n");
    printf("500rs note = %d\n", note500);
    printf("100rs note = %d\n", note100);
    printf("50rs note = %d\n", note50);
    printf("20rs note = %d\n", note20);
    printf("10rs note = %d\n", note10);
    printf("5rs coin = %d\n", note5);
    printf("2rs coin = %d\n", note2);
    printf("1rs coin = %d\n", note1);
    return 0;
}
