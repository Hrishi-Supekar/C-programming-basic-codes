//WAP to find out perimeter and area of the Square and Rectangle.
//p of sq = 4*a
//a of sq = a^2
//p of rec = 2*(l+w)
//a of rec = w*l

#include<stdio.h>
int main()
{
	int side,l,b;
	printf("Enter the side of square:");
	scanf("%d",&side);
	printf("Enter the length of rectangle:");
	scanf("%d",&l);
	printf("Enter the breadth of rectangle:");
	scanf("%d",&b);
	
	printf("The area of square is:%d\n",side*side);
	printf("The perimeter of sqaure is:%d\n",4*side);
	
	printf("The area of rectangle is:%d\n",(l*b));
	printf("The perimeter of rectangle is:%d\n",2*(l+b));
	return 0;
}
