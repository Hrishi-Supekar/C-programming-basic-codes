//#include<stdio.h>
//void main()
//{
//	int j=1;
//	while(j+=2,j<=10)
//	{
//		printf("%d ",j);
//	}
//	printf("%d",j);
//}

//Infinite loop
#include<stdio.h>
void main()
{
	int x=10,y=2;
	while(x+y-1)
	{
		printf("%d %d",x--,y--);
	}
	
}
