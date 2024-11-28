#include<stdio.h>
int main()
{
    int n;
    printf("Enter A Number: ");
    scanf("%d",&n);
    int *p;
    p = &n; 
    int square = (*p)*(*p) ;
    int cube = (*p)*(*p)*(*p) ;
    printf(" Sqaure Of A Number: %d\n ",square);
    printf(" Cube Of A Number: %d ",cube);
}