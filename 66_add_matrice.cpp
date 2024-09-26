#include <stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3] ;
	
	for ( int i=0 ; i<3 ; i++)
	{
		for ( int j=0 ; j<3 ; j++ )
		{
			printf(" Enter Number of 1st Matrix(3*3): ");
			scanf("%d",&a[i][j]);
		}
	} printf("\n");
	for ( int i=0 ; i<3 ; i++)
	{
		for ( int j=0 ; j<3 ; j++ )
		{
			printf(" Enter Number of 2nd Matrix(3*3): ");
			scanf("%d",&b[i][j]);
		}
	}printf("\n");
	printf(" Addition Of Matrix : ");
	printf("\n");
	printf("\n");
	for ( int i=0 ; i<3 ; i++)
	{
		for ( int j=0 ; j<3 ; j++ )
		{
		c[i][j] = a[i][j] + b[i][j] ;
		}
	}
	for ( int i=0 ; i<3 ; i++)
	{
		for ( int j=0 ; j<3 ; j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
}
