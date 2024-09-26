#include<stdio.h>
int main()
{
	int n;
	printf(" How many Numbers Integers In Array: ");
	scanf("%d",&n);
	int arr[n],arr1[n];
	
	printf("\n Enter The Elements Of Array 1 : ");
	for( int i=0 ; i<n ; i++ )
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Enter The Elements Of Array 2 : ");
	for( int i=0 ; i<n ; i++ )
	{
		scanf("%d",&arr1[i]);
	}
	int store[n];
	for( int i=0 ; i<n ; i++ )
	{
		store[i] = arr[i] ;
	}
	printf("\n After Swaping Elements Of Array 1 : ");
	for( int i=0 ; i<n ; i++ )
	{
		arr[i]=arr1[i] ;
		printf("%d ",arr[i]);
	}
	printf("\n After Swaping Elements Of Array 2 : ");
	for( int i=0 ; i<n ; i++ )
	{
		arr1[i] = store[i] ;
		printf("%d ",arr1[i]);
	}
	
}
