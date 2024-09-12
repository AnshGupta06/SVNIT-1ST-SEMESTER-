#include<stdio.h>
int main()
{
	int i,num,q,sum=0;
	printf(" Enter a Number :- ");
	scanf("%d",&num);
	
	int temp=num;
	
	for( int i=1 ; num>0  ; i++)
	{
		q = num %10 ;
		sum = sum*10 + q ;
		num = num/10 ;	
	}
	{ printf ("\n Reverse of %d is %d ",temp,sum);	}

}
