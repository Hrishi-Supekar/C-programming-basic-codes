//WAP for grading using switch case

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the grade you got:\n");
	printf("Grade option:(A or a),(B or b),(C or c),(F or f)\n");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'A':
			printf("Excellent!!");
			break;
		case 'a':
			printf("Excellent!!");
			break;
		case 'B':
			printf("Well Done!!");
			break;
		case 'b':
			printf("Well Done!!");
			break;	
		case 'C':
			printf("Average!!");
			break;
		case 'c':
			printf("Average!!");
			break;	
		case 'F':
			printf("Fail!!");
			break;
		case 'f':
			printf("Fail!!");
			break;	
		default:
			printf("Enter valid grade!!!");		
	}
	return 0;
}
