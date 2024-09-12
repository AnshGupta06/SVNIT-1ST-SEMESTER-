#include<stdio.h>
int main()
{
	float n;
	printf(" Enter Consumption Units :- ");
	scanf("%f",&n);
	
	if ( n>=0 && n<=200) { printf(" Total Amount = %f ", 0.50*n );	}
	if ( n>=210 && n<=400) { printf(" Total Amount = %f ", 100 + 0.65* (n-200) );	}
	if ( n>=401 && n<600) { printf(" Total Amount = %f ", 230 + 0.80* (n-400) );	}
 	if ( n>=600 ) { printf(" Total Amount = %f ", 425 + 1.25*(n-600) );	}

}
