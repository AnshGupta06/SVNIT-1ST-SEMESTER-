#include<stdio.h>
int main()
{
	int n;
	printf(" Enter A Number :- ");
	scanf("%d",&n);
	
	printf("\n Factor of %d = ",n);
	for( int i=1 ; i>0 ; i++ )
	{
		if ( n%i==0)
		{
			printf("%d,",i);
		}
	}
}
