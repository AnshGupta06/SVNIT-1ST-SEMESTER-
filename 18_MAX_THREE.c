#include<stdio.h>
int main()
{
	int a;
	printf("Enter a First Number: ");
	scanf("%d",&a);
	int b;
	printf("Enter a Second Number: ");
	scanf("%d",&b);
	int c;
	printf("Enter a Third Number: ");
	scanf("%d",&c);	
	int max;
	max = a>b ? ( a>c ? a : c ) : ( b>c ? b : c);
	printf("\n Max %d" ,max);
	}
