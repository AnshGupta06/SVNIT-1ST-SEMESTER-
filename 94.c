#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],cpy[100];
    int n;
    printf(" Enter Number Of Characters: ");
    scanf("%d",&n);
   getchar(); // Clear the newline character left in the buffer by scanf
    printf(" Enter A String: ");
   //fgets( str , sizeof(str), stdin);
    gets(str) ;

    char *p = str;
    for( int i=n-1 ; i>=0 ; i--)
    {
        cpy[i]= *p;
        p++;
    }
    puts(cpy);

}
