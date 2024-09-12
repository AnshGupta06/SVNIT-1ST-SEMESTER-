#include<stdio.h>
int main()
{
	int i,num,sum=0,q;
	printf(" Enter a Number :- ");
	scanf("%d",&num);

	for( int i=1 ; num>0 ; i++)
	{
		q = num%10  ;
		sum = sum + q ;	
		num = num/10 ;
	}
	{ printf("\n Sum Of Digit = %d ",sum);	}
}


