#include<stdio.h>
int main()
{
	int i,n,sume,sumo;
	printf(" Enter a Number :- ");
	scanf("%d",&n);
	
	i=1;
	while( i<=n )
	{
		if ( i%2==0){ sume = sume + i ;}
		else { sumo = sumo + i ;}
		i=i+1;
	}
	printf(" Sum of Even Number = %d\n", sume);
	printf(" Sum of Odd Number = %d ", sumo);
}
