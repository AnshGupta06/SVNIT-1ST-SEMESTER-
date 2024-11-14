#include<stdio.h>
#include<string.h>
int main() {
    char ch[100],i,sum;
    typedef struct stu_detail{
        char name[100];
        int m1,m2,m3,m4,m5,m6,sum;
    } stu_detail;
    stu_detail arr[10];
    for (i=0; i<10; i++) {
        printf("Enter the name of Roll No %d: ",i+1);
        scanf("%[^\n]s",arr[i].name);
        printf("Enter marks: ");
        scanf("%d %d %d %d %d %d",&arr[i].m1,&arr[i].m2,&arr[i].m3,&arr[i].m4,&arr[i].m5,&arr[i].m6);
        arr[i].sum=arr[i].m1+arr[i].m2+arr[i].m3+arr[i].m4+arr[i].m5+arr[i].m6;
    }
    for (i=0; i<10; i++) {
        if (arr[i].sum>500) {
            printf("Roll No %d %s has scored more than 500 marks!",i+1);
        }
    }
}
