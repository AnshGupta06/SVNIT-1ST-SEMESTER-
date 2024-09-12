#include<stdio.h>
int main()
{
	int n,max1=0,max2=0,a;
	printf(" How many Numbers :- " );
	scanf("%d",&n);
	
	for ( int i=1 ; i<=n ; i++ )
	{
		printf(" Enter Number - ");
		scanf("%d",&a);

		if ( a>max1 ) { max2=max1 ; max1=a ;  }
		else if( a>max2 ) { max2=a ;  } 
	}
	printf("\n Second Largest number : %d ",max2);
	printf("\n Largest number : %d ",max1);
}
