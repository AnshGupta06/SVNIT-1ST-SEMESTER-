#include<stdio.h>
int main()
{
	int i,product,n;
	printf(" Enter A Number :- ");
	scanf("%d",&n);
	
	i=n;
	while( i>0)
	{
		product= product * i ; 
		i= i-1;
	}
	printf("\n Factorial of %d = %d",n,product);
}
