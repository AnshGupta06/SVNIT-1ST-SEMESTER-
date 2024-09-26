#include<stdio.h>
int main()
{
	int n, num , a=1;
	printf(" Enter Numbers Of Element in Array: ");
	scanf("%d",&n);
	printf("\n");printf("\n");
	int arr[n];
	for ( int i=0 ;i <n ; i++)
	{
		printf(" Enter Number: ");
		scanf("%d",&arr[i]);
	}printf("\n");
	
	printf(" Enter The Position To Rotate Array: ");
	scanf("%d",&num);
	
	for ( int i = num ; i>0 ; i--)
	{
		printf(" %d ",arr[ n-i ]);
	}
	for ( int i = 0 ; i<n-num ; i++)
	{
		printf(" %d ",arr[ i ]);
	}
	
}
