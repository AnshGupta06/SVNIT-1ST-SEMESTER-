#include<stdio.h>
int main()
{
	for ( int i=1 ; i<=5 ; i++)
	{
		for ( int j=5 ; j>=1 ; j-- )
		{
			if (j<=i) { printf ("* ");	} // remember put space imp imp
			else { printf(" ");		}
		}
		printf("\n");
	}
}
