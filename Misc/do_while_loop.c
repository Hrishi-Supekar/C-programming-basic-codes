#include<stdio.h>
int main()
{
	char c;
	int ch,d;
	do
	{
		printf("1.Print Hello\n2.Print Hrishi\n3.Print Supekar\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					printf("Hello\n");
					break;
				}
			case 2:
				{
					printf("Hrishi\n");
					break;	
				}
			case 3:
				{
					printf("Supekar\n");
					break;
				}
			default:
				{
					printf("Enter valid input!!\n");
					break;
				}
		}
		printf("\nDo you want to continue??\n");
		scanf("%d",&d);//for scanning blank.
		scanf("%c",&c);
	}
	while(c=='y'||'Y');
}
