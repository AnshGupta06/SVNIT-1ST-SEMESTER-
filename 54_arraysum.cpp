#include<stdio.h>
int main()
{
int arr[10] ;
int sum=0;
for( int i=1 ; i<=10 ; i++ )
{
    printf ( " Enter %d Number: ",i);
    scanf("%d",&arr[i-1]);
    sum = sum + arr[i-1] ;
}
    printf("\n Total Sum = %d",sum);
    return 0;
}

