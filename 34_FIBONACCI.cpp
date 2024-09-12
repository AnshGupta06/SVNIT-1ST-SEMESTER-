#include<stdio.h>
int main()
{
	int n,a,b,c ;
	printf(" Enter a Number :- ");
	scanf("%d",&n);
	printf("\n");
	a=0;
	b=1;
	int i=1;
	while (  i<=n )
	{
		c=a+b; { printf("%d"),c;}
		a=b;
		b=c;
		i++;
	}
}
