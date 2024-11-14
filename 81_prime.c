#include<stdio.h>
int check(int n)   // works in visual code
{
	for ( int i=2 ; i<n ; i++)   // works in visual code 
	{
		if ( n%i==0) { return 0  ;	}
	}
	return 1 ;
}
int main()
{
	int n ;
	printf(" Enter A Number ");
	scanf("%d",&n);
	if ( check(n)==1 ) { printf(" Number Is Prime "); }
	else { printf(" Number Is Not Prime "); }
}
