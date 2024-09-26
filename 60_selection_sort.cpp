#include<stdio.h>
int main()
{
	int n,i,j,d=0;
	printf(" Enter Size Of Array: ");
	scanf("%d",&n);
	printf("\n");
	
	int arr[n];
	for(i=0 ; i<n ; i++ )
	{
		printf(" Enter %d Number Out of %d : ",i+1,n);
		scanf("%d",&arr[i]);
	}
	for ( i=0 ; i<n-1 ; i++ )
	{
		for ( j=i+1 ; j<n ; j++)
		{
			if ( arr[j]< arr[i] ) { d= arr[j]	; arr[j] = arr[i] ; arr[i]=d ;}
		}
		
	}
	printf("\n The Ascending Order Is : ");
	for ( i=0 ; i<n ; i++)
	{ 	printf("%d ",arr[i]);	}
}
