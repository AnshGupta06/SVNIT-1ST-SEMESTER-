#include <stdio.h>
int main()
{
	int base,power,i,product=1;
	printf(" Enter Base Number :- ");
	scanf("%d",&base);
	printf("\n Enter Power Number :- ");
	scanf("%d",&power);
	
	i=1 ;
	while(i<=power )
	{
		product = product*base ;
		i=i+1;
	}
	printf("\n Answer = %d ", product);
}
