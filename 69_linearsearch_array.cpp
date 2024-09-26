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
	
	for ( int i=0 ; i<n ; i++)
	{
		if ( arr[i]==num) { a=2 ;	}
	}
	printf("\n");
	if ( a==2 ){ printf(" Number Present In Array ");	}
	else { printf(" Number Not Present In Array ");	}
}
