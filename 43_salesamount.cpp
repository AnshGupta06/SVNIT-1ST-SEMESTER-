#include<stdio.h>
int main()
{
	float n;
	printf(" Enter Sales :- ");
	scanf("%f",&n);
	
	if (  n<=500 ) { printf("\n Total Amount = %f ", (500*0.05) );	}
	if ( n>500 && n<=2000) { printf("\n Total Amount = %f ", 35 + (0.1)* (n-500) );	}
	if ( n>2000 && n<=5000) { printf("\n Total Amount = %f ", 185 + (0.12)* (n-2000) );	}
 	if ( n>5000 ) { printf("\n Total Amount = %f ", (0.125)*(n) );	}

}
