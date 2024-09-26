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
	for ( int i=0  ; i<n ; i++ )
	{
		for ( int j=0 ; j<n ; j++)
		{
			printf(" Enter Element Of 2nd Matrix: ");
			scanf("%d",&b[i][j]);
		}
	}printf("\n");
	for ( int i=0  ;i<n ; i++ )
	{
		for ( int j=0 ; j<n ; j++)
		{
			c[i][j] = 0 ;
			for ( int k=0 ; k<n ; k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j] ;
			}
		}
	}
	printf(" Multiplication Of Matrix: ");
	printf("\n");
	printf("\n");
	for ( int i=0  ;i<n ; i++ )
	{
		for ( int j=0 ; j<n ; j++)
		{
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
}
