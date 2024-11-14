#include<stdio.h>
int max( int arr[] , int n)
{
    int c=0;
    for ( int i=0 ; i<n ; i++ ){
        if ( arr[i]>c) {  c = arr[i] ;}
    }
    return c ;
}
int main(){
    int n;
    printf(" Enter A Number Of Element Of Array: " );
    scanf("%d",&n);
    int arr[n];
    for( int i=0 ; i<n ; i++){
        printf(" Enter %d Element Of Array: ",i+1);
        scanf("%d",&arr[i]);
    }
    int ans = max( arr , n );
    printf(" Maximum Number In Array: %d ",ans);
    return 0;
}
