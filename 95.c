#include<stdio.h>
int main()
{
    int n;
    printf(" Enter Number Of Employee: ");
    scanf("%d",&n);
    
    typedef struct EMPLOYEE 
    {
        int e_number;
        char e_name[100];
        float basic_pay;
    }emp;
    emp detail[n];

    for (int i = 0; i < n; i++)
    {
        printf(" Enter Employee Name: ");
        scanf("%s", detail[i].e_name);
        printf(" Enter Employee Number: ");
        scanf("%d",&detail[i].e_number);
        printf(" Enter Employee Basic Pay: ");
        scanf("%f",&detail[i].basic_pay);
        printf("\n");
    }
         for (int i = 0; i < n; i++)
    {
        printf(" Employee Name: %s \n",detail[i].e_name);
        printf(" Employee Number: %d \n",detail[i].e_number);
        printf(" Employee Basic Pay: %f \n ",detail[i].basic_pay);
        printf("\n");
    }
    
}