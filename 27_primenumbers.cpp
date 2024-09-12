#include<stdio.h>
int main()
{
	int i,n,a=1;
	printf(" Enter a Number :- ");
	scanf("%d",&n);

	if(n==0 || n==1){  a=0; printf("\n %d is Nither Prime or Composite",n);	} 
		
	for( i=2 ; i<n ; i=i+1)
	{
		if(n%i==0 ) { a=a*2; }
	}	
	if (a%2==0 && a!=0) { printf("\n Number Is Composite ");	}
	else if( a%2!=0 && a!=0 ) { printf("\n Number Is Prime ");	}
}
	


