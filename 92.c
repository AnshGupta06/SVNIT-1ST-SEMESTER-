#include<stdio.h>
int main()
{
    int n;
    printf("Enter A Number: ");
    scanf("%d",&n);
    int arr[n],*p;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    p = arr ;
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i)>=c)      
        {
           c = *(arr + i) ;
        }
    }
    printf(" Maximum Number %d",c);
}
    
    