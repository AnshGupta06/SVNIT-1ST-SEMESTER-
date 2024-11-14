#include<stdio.h> // works in vs code
int factorial(int a)
{
    int product=1 ;
    for ( int i=2 ; i<=a ; i++ )
    {
        product = product*i ;
    }
    return product ;
}
int combination( int x, int y)
{
    int answer = factorial(x) / ( factorial(y)*factorial(x-y) );
    return answer;
} 
int main()
{
    int n,r;
    printf("Enter N Number In (NCR) : ");
    scanf("%d",&n);
	printf("Enter R Number In (NCR) : ");
    scanf("%d",&r);
    int final= combination( n,r);
    printf("\n Answer = %d ",final);
    
}
