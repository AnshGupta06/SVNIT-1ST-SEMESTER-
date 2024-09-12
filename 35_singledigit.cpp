#include<stdio.h>
int main()
{
	int num;
	printf(" Enter a Number :- ");
	scanf("%d",&num);
	int sum=0,q=0,p=0,sum2=0;
	
	while( num!=0 ) //not must have i and increment. jab tak num!=0 hoga nhi tab tak run karega code
	{
		p= num%10;
		sum= sum+p;
		num= num/10;
	}
	while( sum!=0 )
	{
		q= sum%10 ;
		sum2 = sum2+q ;
		sum = sum/10 ;
	}
	printf("\n Sum Of Digit Is %d ",sum2);
}
