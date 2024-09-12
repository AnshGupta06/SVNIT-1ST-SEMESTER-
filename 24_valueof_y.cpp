#include<Stdio.h>
int main()
{
	int n,y,x;
	printf("\n Enter n :- ");
	scanf("%d",&n);
	printf("\n Enter x :- ");
	scanf("%d",&x);
	
	if(n==1){ printf ("\n Y= %d", 1+x );}
	if(n==2){ printf ("\n Y= %d", 1+ x/n );}
	if(n>3 || n<1 ){ printf ("\n Y= %d", 1+ n*x );}
	
	if(n==3) {printf ("\n Y= %d", 1 + x*x*x );}

}
