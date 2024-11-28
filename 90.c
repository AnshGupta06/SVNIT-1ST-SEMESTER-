#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   
    char arr[100];
    printf("Enter A String: ");
    gets(arr);
    
    int i=0;
    int count=0;
    while(*(arr + i)!='\0')
    {
      if(*(arr + i)==' '){ i++ ;continue;}
      else
      {count++;
      }
      i++;
    }
    printf("\n");
    printf("TOTAL LENGTH OF A GIVEN STRING %d ",count);
}