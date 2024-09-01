

#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter Basic Salary: ");
	scanf("%d",&a);
	printf("Enter HRA: ");
	scanf("%d", &b);
	printf("Enter Other Allowances: ");
	scanf("%d",&c);	
	d = a+b+c;	
	printf("Gross Salary %d",d);	
}
