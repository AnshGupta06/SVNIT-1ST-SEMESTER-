#include<stdio.h>
int main()
{
    int arr[10] ;
    int a=0,b=0;
    
    for( int i=1 ; i<=10 ; i++ )
    {
        printf(" Enter %d Number ",i);
        scanf("%d",&arr[i-1]);

    }
    int i=1;
    while(i<=10)
    {
        if ( arr[i-1] %2==0){ a=a+1 ; }
        else { b=b+1 ; }
        i++ ;
    }
    printf("\n Total Number of Even Numbers = %d ",a);
    printf("\n Total Number of Odd Numbers = %d ",b);
}

