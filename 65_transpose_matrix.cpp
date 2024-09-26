#include<stdio.h>
int main()
{
	int n;
	printf(" Enter Order Of Matrix: ");
	scanf("%d",&n);
	printf("\n");
	int a[n][n] , b[n][n] , c[n][n] ;
	
	for ( int i=0  ; i<n ; i++ )
	{
		for ( int j=0 ; j<n ; j++)
		{
			printf(" Enter Element Of 1st Matrix: ");
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


	for ( int i=0  ;i<n ; i++ )
	{
		for ( int j=0 ; j<n ; j++)
		{
			b[j][i] = a[i][j] ;
		}
	}
	printf(" Transpose Of Matrix : ");
	printf("\n");
	printf("\n");
	for ( int i=0  ;i<n ; i++ )
	{
		for ( int j=0 ; j<n ; j++)
		{
			printf(" %d ",b[i][j]);
		}
		printf("\n");
	}
}
