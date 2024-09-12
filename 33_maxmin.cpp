#include<stdio.h>
int main()
{
	int n,c=0,a,e;
	printf(" How many Numbers :- " );
	scanf("%d",&n);
	printf("\n");
	printf(" Enter Number - ");
	scanf("%d",&e);
	
	int d=e;
	
	for ( int i=1 ; i<n ; i++ )
	{
		printf(" Enter Number - ");
		scanf("%d",&a);

		if ( a>c) { c=a ;  }
		if ( a<d ) { d=a ;  } 
	}
	if ( e > c ){ c=e ; }
	printf("\n");
	printf("\n Min Number : %d ",d);
	printf("\n Largest number : %d ",c);
}
