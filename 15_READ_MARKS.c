#include<stdio.h>
int main()
{
	int a,b,c,d,e,sum,p;
	printf("Enter marks of S.S (out of 20): ");
	scanf("%d",&a);
	printf("Enter marks of Maths (out of 20): ");
	scanf("%d",&b);
	printf("Enter marks of English (out of 20) : ");
	scanf("%d",&c);
	printf("Enter marks of Physics (out of 20) : ");
	scanf("%d",&d);
	printf("Enter marks of Chemistry (out of 20) : ");
	scanf("%d",&e);
	
	sum= a+b+c+d+e ;
	p= ( (sum)/100 ) *100 ;

	if ( sum>=75 ){ printf("\nDistinction ");
	}
	if ( sum>=60 && sum <75 ){ printf("\n1st Class ");
	}
	if ( sum>=50 && sum <60 ){ printf("\n2nd Class ");
	}
	if ( sum>=40 && sum <50 ){ printf("\n3rd Class ");
	}
	if ( sum>=33 && sum <40 ){ printf("\nPASS ");
	}
	if (sum<33){printf("\nFAIL ");
	}		
}
