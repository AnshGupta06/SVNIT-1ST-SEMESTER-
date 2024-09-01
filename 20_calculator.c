#include<stdio.h>
int main()

{
	float a,b;
		char op;
	printf(" Enter Operator (+,-,/,*) :- ");
	scanf("%c",&op);
	printf("\n Enter First Number : ");
	scanf("%f",&a);
	printf("\n Enter Second Number : ");
	scanf("%f",&b);	
	switch(op)
	{
		case '+':
		printf("\n Your Answer is = %f",a+b);
		break;
		
		case '-':
		if (a>b) { printf("\n Your Answer is = %f",a-b); }
		if (b>a) { printf("\n Your Answer is = %f",b-a); }
		if (b==a) { printf("\n Your Answer is = 0"); }
		break;
		
		case '/':
		printf("\n Your Answer is = %f",a/b);
		break;
		
		case '*':
		printf("\n Your Answer is = %f",(a*b));
		break;
		
		
		default:
		printf("invalid");
		}
}
