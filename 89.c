#include<stdio.h>
int main()
{
    int n;
    printf("Enter A Number: ");
    scanf("%d",&n);
    int arr[n],arr1[n];
    // to input array
    for( int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
       // to store n-1 th element into ith element using pointer
    for ( int i= n-1 ; i>=0 ; i--)
    {
    arr1[n-1-i] = *(arr + i);
    }
    printf("\n");
    //to print array2  
    for( int i=0 ; i<n ; i++)
    {
        printf("%d\n",arr1[i]);
    }
}