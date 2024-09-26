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
	
	printf(" Enter Element for Linear Search: ");
	scanf("%d",&num);
	printf("\n");
	
	for ( int i=0 ; i<n ; i++)
	{
		if ( arr[i]==num) { a=2*a ; if ( a==2 ){ printf(" Number Present In Array ");	}
		 printf("\n Element is found at index number %d ",i+1)	;}
	}
	printf("\n");
	
	if ( a%2!=0) { printf(" Number Not Present In Array ");	}
}
