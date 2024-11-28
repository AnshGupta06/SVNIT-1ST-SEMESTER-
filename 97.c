#include<stdio.h>
int main()
{
    char str[100],cpy[100];
  // getchar(); // Clear the newline character left in the buffer by scanf
    printf(" Enter A String: ");
   //fgets( str , sizeof(str), stdin);
    gets(str) ;
    int count=0; 
    char *p=str;
    while(*p!='\0')
    {
        if (*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')    
        {
            count++;
        }
        p++;
    }
    printf("Total Number Of Vowels In The String Is: %d",count);
}