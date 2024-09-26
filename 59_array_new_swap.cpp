#include<stdio.h>
int main()
{
	int n;
	printf(" How many Numbers Integers In Array: ");
	scanf("%d",&n);
	int arr[n],arr1[n];
	printf("\n");
	
	for( int i=0 ; i<n ; i++ )
	{
		printf(" Enter The Elements Of Array 1 : ");
		scanf("%d",&arr[i]);
	}
	printf("\n");

	for( int i=0 ; i<n ; i++ )
	{
		printf(" Enter The Elements Of Array 2 : ");
		scanf("%d",&arr1[i]);
	}
	for( int i=0 ; i<n ; i++ )
	{
	arr1[i]= arr[i] + arr1[i] ;
	arr[i] = arr1[i]- arr[i] ;
	arr1[i]= arr1[i] - arr[i] ;
	}
	printf("\n After Swaping Elements Of Array 1 : ");
	for( int i=0 ; i<n ; i++ )
	{
		printf("%d ",arr[i]);
	}
	printf("\n After Swaping Elements Of Array 2 : ");
	for( int i=0 ; i<n ; i++ )
	{
		printf("%d ",arr1[i]);
	}
	
}
