
#include<stdio.h>
int main()
{
	float Principal_Amount;
	printf("Enter Principal Amount: ");
	scanf("%f",&Principal_Amount);
	float Rate_Of_Interest;
	printf("Enter Rate Of Interest: ");
	scanf("%f",&Rate_Of_Interest);
	float Time;
	printf("Enter Time: ");
	scanf("%f",&Time);
	float Simple_Interest;	
	float product;	
	product = Principal_Amount*Rate_Of_Interest*Time;
	Simple_Interest = product/100;
	printf("\nSimple_Interest=%f",Simple_Interest);
	
}
