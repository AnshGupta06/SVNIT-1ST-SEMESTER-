#include<stdio.h>
int main()
{
	int n,i,j;
	printf(" Enter Size Of Array: ");
	scanf("%d",&n);
	printf("\n");
	
	int arr[n];
	for(i=0 ; i<n ; i++ )
	{
		printf(" Enter %d Number Out of %d Of Array 1 : ",i+1,n);
		scanf("%d",&arr[i]);
	}
	int d= arr[0] ;
	printf("\n");
	int arr1[n];
	for(i=0 ; i<n ; i++ )
	{
		printf(" Enter %d Number Out of %d Of Array 2 : ",i+1,n);
		scanf("%d",&arr1[i]);
	}
	for ( i=0 ; i<n-1 ; i++ )
	{
		for ( j=i+1 ; j<n ; j++)
		{
			if ( arr[j]< arr[i] ) { d= arr[j]	; arr[j] = arr[i] ; arr[i]=d ;}
		}
	}
		for ( i=0 ; i<n-1 ; i++ )
	{
		for ( j=i+1 ; j<n ; j++)
		{
			if ( arr1[j]< arr1[i] ) { d= arr1[j]	; arr1[j] = arr1[i] ; arr1[i]=d ;}
		}
	}
	int fin[2*n];
	for(i=0 ; i<n ; i++ )
	{
		fin[i]= arr[i] ;
	}
		for(i=n ; i<2*n ; i++ )
	{
		fin[i]= arr1[i-n] ;
	}
	
	for ( i=0 ; i< 2*n -1 ; i++ )
	{
		for ( j=i+1 ; j< 2*n ; j++)
		{
			if ( fin[j]< fin[i] ) { d= fin[j]	; fin[j] = fin[i] ; fin[i]=d ;}
		}
	}
	printf("\n The Ascending Order Is : ");
	printf("\n");
	for ( i=0 ; i< 2*n ; i++)
	{ 	printf("%d ",fin[i]);	}
	
}
