#include<stdio.h>
int swap ( int* x , int* y){
    int temp= *x ;
    *x = *y ;
    *y = temp ;
    return 0;
}

int main(){
    int a,b;
    printf(" Enter First Number: ");
    scanf("%d",&a);
    printf(" Enter Second Number: ");
    scanf("%d",&b);
    swap(&a , &b );
    printf(" First Number: %d\n",a);
    printf(" Second Number: %d",b);
    return 0;
}
