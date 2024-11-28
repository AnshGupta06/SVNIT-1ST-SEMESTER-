#include<stdio.h>
int main()
{
    int n;
    printf("Enter A Number: ");
    scanf("%d",&n);
    int arr[n],arr1[n];

    for( int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( int i=0 ; i<n ; i++)
    {
    arr1[i] = *(arr + i);
    }
    printf("\n"); 
    for( int i=0 ; i<n ; i++)
    {
        printf("%d\n",arr1[i]);
    }
}