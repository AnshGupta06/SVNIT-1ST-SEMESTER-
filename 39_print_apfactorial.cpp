#include<stdio.h>
int main()
{
	float i,product,n,q=0,sum,a;
	printf(" Enter A Number :- ");
	scanf("%f",&n);
	printf("\n");
	
	for (  i=1 ; i<=n ; i++ )
	{
		product =1 ; // remember that not to declare in starting nhi to vo har bar multiply karte jayega previous value
		for ( a =i ; a>0 ; a-- )
		{
			product= product * a ; 	
		}
		sum = i / product ;
		
		printf(" %f / %f  + ",i,product);
		q = sum +q ;
	}
	printf("\n\n Answer of Series Is :-  %f ",q);
}











	




