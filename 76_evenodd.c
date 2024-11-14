#include<stdio.h>
int check(a)
	{
		if ( a%2==0) printf(" %d is Even ",a);
		else printf(" %d is Odd ",a);
	}
int main()
{
	int a;
	printf(" Enter A Number: ");
	scanf("%d",&a);
	printf("\n");
	check(a) ;
}
