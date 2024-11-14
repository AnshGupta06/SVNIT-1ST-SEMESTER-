#include<stdio.h>
int check(a)
	{
		int temp=a,q;
		int sum=0;
		
		while ( a!=0){
		q = a%10 ;
		sum = sum + q*q*q ;
		a = a / 10 ;
		}
		if ( temp==sum) printf(" Number Is ARMSTRONG ") ;
		else  printf(" Number Is Not ARMSTRONG ") ;
	
		return 0 ;
	}
int main()
{
	int a;
	printf(" Enter A Number: ");
	scanf("%d",&a);
	printf("\n");
	check(a) ;	
}	
