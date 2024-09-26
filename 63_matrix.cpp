#include<stdio.h>
int main()
{
	int arr[9] ;
	for ( int i =1 ; i<=9 ; i++ )
	{
		printf(" enter  number ");
		scanf("%d",&arr[i-1] );
	}
	//for ( int i=0 ; i<9 ; i++)
	int i=0;
	while ( i<9 )
	{
		{
		for ( int j=1 ; j<=3 ; j++)
		printf("%d ",arr[i]);
		i=i+1 ;
		}
		printf("\n");
		
	}
	
}
