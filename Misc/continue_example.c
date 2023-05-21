//#include<stdio.h>
//void main()
//{
//	int i;
//	for(i =1;i<=10;i++)
//	{
//		if(i==5)
//		continue;
//		
//		printf("%d\n",i);
//	}
//}


#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
			{
				if(i==2&&j==2)
					{
						continue;
					}
				printf("%d %d\n",i,j);
			}
	}
}
