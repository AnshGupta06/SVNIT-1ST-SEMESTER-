#include<stdio.h>
int main()
{
	int n;
	printf(" Enter Order Of Matrix: ");
	scanf("%d",&n);
	printf("\n");
	int a[n][n] , b[n][n] ;
	
	for ( int i=0  ; i<n ; i++ )
	{
		for ( int j=0 ; j<n ; j++)
		{
			printf(" Enter Element Of Matrix: ");
			scanf("%d",&a[i][j]);
		}
	}printf("\n");
	printf(" Matrix : ");
	printf("\n");
	for ( int i=0  ; i<n ; i++ )
	{
		for ( int j=0 ; j<n ; j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}printf("\n");
	
	int min,max= a[0][0] ;
	for ( int i =0 ; i<n ; i++)
	{
		for ( int j=1 ; j<n ; j++)
		{
			if ( a[i][j] > max ) { max = a[i][j] ;	}
			if ( a[i][j] < min ) { min = a[i][j] ;		}
		}
	}

	printf(" Max Number In Matrix: %d",max);
	printf("\n\n Min Number In Matrix: %d",min);	
}
