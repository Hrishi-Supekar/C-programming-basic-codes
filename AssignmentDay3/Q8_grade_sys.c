//8.	Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
//Calculate percentage and grade according to following:
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 40% : Grade E
//Percentage < 40% : Grade F

#include<stdio.h>
int main()
{
	float p,ch,b,m,c,per,sum;
	printf("Enter the marks of Physics|Chemistry|Biology|Mathematics|Computer:");
	scanf("%f%f%f%f%f",&p,&ch,&b,&m,&c);
	
	sum=(p+ch+b+m+c);
	per=sum*100/500;
	printf("The percentage obtained are %f\n",per);
	
	if(per>=90)
	printf("Grade A");
	else if(per>=80)
	printf("Grade B");
	else if(per>=70)
	printf("Grade C");
	else if(per>=60)
	printf("Grade D");
	else if(per>=40)
	printf("Grade E");
	else
	printf("Grade F");
	
}

