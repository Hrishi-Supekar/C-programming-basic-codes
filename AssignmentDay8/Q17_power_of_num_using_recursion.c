//Q17 WAP to print power of number using recursion

#include<stdio.h>
int power_of_num(int,int);
int main()
{
	int base,expo,ans;
	printf("Enter the base value:");
	scanf("%d",&base);
	printf("Enter the expo value:");
	scanf("%d",&expo);
	ans=power_of_num(base,expo);
	printf("The power of number is :%d",ans);
	return 0;
}
int power_of_num(int base, int expo)
{
	if(expo==0)
	return 1;
	else
	return base*power_of_num(base,expo-1);
}
