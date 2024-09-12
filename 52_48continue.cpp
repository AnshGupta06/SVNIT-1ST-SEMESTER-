#include<stdio.h>
int main()
{
	int c=1;
	for ( int i=0 ; i<=4 ; i++)
	{
		c=1; 
		for ( int j=5 ; j>=1 ; j-- ) 
		{								
			
			if (j<=i) { printf ("%d",c); c=c+1;	}
			else { printf(" ");		}
			
		}
		while ( c>0 )
		{
				printf ("%d",c); c=c-1;
		}
		printf("\n");
	}
}
