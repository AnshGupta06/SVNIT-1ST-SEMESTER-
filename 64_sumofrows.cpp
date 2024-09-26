#include<stdio.h>
int main()
{
	int n;
	printf(" Enter Order Of Matrix: ");
	scanf("%d",&n);
	printf("\n");
	int a[n][n] , b[n][n] , c[n][1] ;
	
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
	
	for ( int i=0  ; i<n ; i++ )
	{
		c[i][0]=0 ;
		for ( int j=0 ; j<n ; j++)
		{
				c[i][0] = c[i][0] + a[i][j] ;
		}
	}
	for ( int i=0  ; i<n ; i++ )
	{
		printf(" Sum Of Row %d : %d ",i+1,c[i][0]);
		printf("\n");
		printf("\n");
	}
	
}
