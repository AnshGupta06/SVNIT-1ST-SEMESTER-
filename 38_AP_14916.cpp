#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf(" Enter a Number :- ");
	scanf("%d",&n);
	printf("\n");
	
	for( i=1 ; i<=2*n-1 ; i=i+2)
	{
		sum=sum+i;
		printf(" %d ",sum);
	}
}
