#include<stdio.h>
int fib(n)
{
	int a=0,b=1,sum=0;
	
	int i=1 ;
	while(i<= n){ // we can use n-2 when we not write i>2 
	
	if ( i==1){ printf("%d ",a);	}
	if ( i==2) { printf("%d ",b);	}
	if ( i>2)	{
					sum=a+b ;
					a=b ;
					b=sum;
				printf("%d ",sum);	}	
	i++ ;
	}
	
}
int main()
{
	int n;
	printf(" Enter Number Of Terms: ");
	scanf("%d",&n);
	printf("\n");
	fib(n);
}
