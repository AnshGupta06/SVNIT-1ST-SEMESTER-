#include<stdio.h>
int main()
{
	int i,n;
	printf(" Enter a Number :- ");
	scanf("%d",&n);
	printf("\n");
	
	for( i=2 ; i<=2*n ; i=i+2)
	{
		printf(" %d ",i);
	}
}
