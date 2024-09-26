#include<stdio.h>
int main()
{
	int n,d=0;
	printf(" How Many Elements In Array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\n");
	for ( int i=0 ; i<n ; i++ )
	{
		printf(" Enter The Number: ");
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for( int i=0 ; i< n/2 ; i++)
		{
			d= arr[(n-1)-i] ;
			arr[(n-1)-i] = arr[i] ;
			arr[i] = d ;
		}
	printf(" Reverse Of Array = ");
	for ( int j=0 ; j<n ; j++)
	{
		printf("%d ",arr[j]) ;
	}
}
