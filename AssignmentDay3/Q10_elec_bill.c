//10.	Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill

#include<stdio.h>
void main()
{
	float unit,x,tot;
	printf("Enter the unit number:");
	scanf("%f",&unit);
	
	if(unit<=50)
	{
		x=unit*0.5;
		x=x+(x*0.2);
		printf("The Electricity bill is:%f",x);
	}
	else if(unit>50 && unit<150)
	{
		x=unit-50;
		tot = (50*0.5)+(x*0.75);
		tot=tot+(tot*0.2);
		printf("The Electricity bill is:%f",tot);
	}
	else if(unit>150 && unit<250)
	{
		x=unit-150;
		tot = (50*0.5)+(100*0.75)+(x*1.2);
		tot=tot+(tot*0.2);
		printf("The Electricity bill is:%f",tot);
	}
	else
	{
		x=unit-250;
		tot = (50*0.5)+(100*0.75)+(100*1.2)+(x*1.5);
		tot=tot+(tot*0.2);
		printf("The Electricity bill is:%f",tot);
	}
}

