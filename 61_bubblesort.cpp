#include<stdio.h>
int main()  				// revision
{
	int n;
	printf(" Enter Size Of Array: ");
	scanf("%d",&n);
	printf("\n");
	
	int arr[n] ;
	for(int i=0 ; i<n ; i++ )
	{
		printf(" Enter %d Number Out of %d : ",i+1,n);
		scanf("%d",&arr[i]);
	}
	
	int j=0 ;
	while ( j<n ){
		for ( int i=0 ; i<= n-i +1 ; i++){
			if ( arr[i] > arr[i+1] ) {
				int temp= arr[i];
				arr[i]=arr[i+1] ;
				arr[i+1]=temp ; }
			}
			j++ ;
		}
	printf("\n");
	for(int i=0 ; i<n ; i++ )
	{
		printf(" %d ",arr[i]);
	}
}

