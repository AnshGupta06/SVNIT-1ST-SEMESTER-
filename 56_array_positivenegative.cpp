#include<stdio.h>
int main()
{
    int arr[10] ;
    int a=0,b=0,c=0;
    
    for( int i=1 ; i<=10 ; i++ )
    {
        printf(" Enter %d Number: ",i);
        scanf("%d",&arr[i-1]);

    }
    int i=1;
    while(i<=10)
    {
        if ( arr[i-1] >0){ a=a+1 ; }
        else if ( arr[ i-1] <0 ) { b=b+1 ; }
        else if ( arr[ i-1] ==0 ) { c=c+1 ; }
        i++ ;
    }
    printf("\n Total Number of Positive Elements = %d ",a);
    printf("\n Total Number of Negative Elements = %d ",b);
    printf("\n Total Number of Zero Elements = %d ",c);

}

