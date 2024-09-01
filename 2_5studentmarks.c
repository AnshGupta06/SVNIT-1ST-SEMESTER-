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
	p = sum ;
	
	printf("\nPercentage is %d ",p);
}
