#include <stdio.h>
int main()
{
	int arr[5],arr1[5],sum[5];
	
	for ( int i=0 ; i<5 ; i++)
	{
		printf(" Enter The Array 1 Elements: ");
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for ( int j=0 ; j<5 ; j++)
	{
		printf(" Enter The Array 2 Elements: ");
		scanf("%d",&arr1[j]);
	}
	for ( int k=0 ; k<5 ; k++ )
	{
		sum[k] = arr[k] + arr1[k] ;
	}
	printf("\n Sum Of Two Array = ");
	for ( int l=0 ; l<5 ; l++)
	{
		printf("%d ",sum[l]) ;
	}
	
}
