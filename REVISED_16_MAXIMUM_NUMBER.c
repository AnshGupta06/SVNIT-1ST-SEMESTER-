#include<stdio.h>
int main()
{
	int a;
	printf("Enter a First number: ");
	scanf("%d",&a);
	int b;
	printf("Enter a Second number: ");
	scanf("%d",&b);
	int c;
	printf("Enter a Third number: ");
	scanf("%d",&c);	
	
	if (a>b)
    { 
		if (a>c)
		printf("%d is greatest ",a);	
		else 
		printf("%d is greatest",c);		
	}
	else if( b>c)
	
	printf("%d is greatest ",b);	
	else 
	printf("%d is greatest ",c);		
		
	
	  return 0;
}
