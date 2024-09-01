#include<stdio.h>
int main()
{
	int a;
	printf("Enter a First Number: ");
	scanf("%d",&a);
	int b;
	printf("Enter a Second Number: ");
	scanf("%d",&b);
	int c;
	printf("Enter a Third Number: ");
	scanf("%d",&c);	
	
	if ( a-b >=0 && a-c >=0){ printf("\n Greatest Number is : %d" ,a);
	}
	else if ( b-a >=0 && b-c >=0){ printf("\n Greatest Number is : %d" ,b);
	}
	else if ( c-b >=0 && c-a >=0){ printf("\n Greatest Number is : %d" ,c);
	}
	else if ( a==b && b==c && a==c ) {printf("\n All are Same Numbers");
	}		
}
