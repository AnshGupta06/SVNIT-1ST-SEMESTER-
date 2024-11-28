#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter A String: ");
    
    gets(s);
    int count=1;
    int i=0;
    while (*(s + i)!='\0')
    {
        if (*( s + i)==' ') { count++ ;}
        i++ ;
    }
    printf(" Total Number OF Words: %d",count);
}