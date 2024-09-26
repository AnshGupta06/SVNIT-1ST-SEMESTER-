#include<stdio.h>
int main()
{
    int n;
    printf(" How Many Number You Want to Enter: ");
    scanf("%d",&n);
    int a=0,b=0;
    int arr[n] ;
    printf("\n");
    
    for( int i=1 ; i<=n ; i++ )
    {
        printf(" Enter %d Number: ",i);
        scanf("%d",&arr[i-1]);

        if ( arr[i-1]>a ) { b=a ; a= arr[i-1 ] ;}
        else if ( arr[i-1]>b) { b= arr[i-1] ; }

    }
    printf("\n Greatest Number = %d ",a);
    printf("\n Second Greatest = %d ",b);
    
    return 0;
}
