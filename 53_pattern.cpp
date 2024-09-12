#include<stdio.h>
int main()
{
	
	int c=1;
	for ( int i=0 ; i<=3 ; i++)  // if odd number of element then decreasing pattern jese 53 > 52 and 49 > 48
	{
		c=1; 
		for ( int j=4 ; j>=1 ; j-- ) 
		{								
			
			if (j<=i) { printf ("*"); c=c+1;	}
			else { printf(" ");		}
			
		}
		while ( c>0 )
		{
				printf ("*"); 
				c=c-1;
		}
		printf("\n");
	}
	// image loop
	for ( int i=2 ; i>=0 ; i--)  // if odd number of element then decreasing pattern jese 53 > 52 and 49 > 48
	{
		c=1; 
		for ( int j=4 ; j>=1 ; j-- ) 
		{								
			
			if (j<=i) { printf ("*"); c=c+1;	}
			else { printf(" ");		}
			
		}
		while ( c>0 )
		{
				printf ("*"); 
				c=c-1;
		}
		printf("\n");
	}
}
