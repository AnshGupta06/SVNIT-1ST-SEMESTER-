#include<stdio.h>
int main()
{
	int c=1;
	for ( int i=1 ; i<=5 ; i++)
	{
		c=1; //// suraj code for pattern first print space
		for ( int j=5 ; j>=1 ; j-- ) //for ( int j=1 ; j<=5-i ; j++) { printf(" ");	}
		{								// for ( int j=1 ; j<=i ; j++ ) { printf("%d",j);		}
			
			if (j<=i) { printf ("%d",c); c=c+1;	}
			else { printf(" ");		}
			
		}
		printf("\n");
	}
}
