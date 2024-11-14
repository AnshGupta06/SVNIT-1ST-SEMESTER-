#include<stdio.h>
int exc(x,y)
{
	int d=0;
	d=x ;
	x=y ;
	y=d ;
	printf("\n Your First Number: %d",x);
	printf("\n Your First Number: %d",y);
}
int main()
{
	int x,y;
	printf(" Enter First Number: ");
	scanf("%d",&x);
	printf(" Enter Second Number: ");
	scanf("%d",&y);
	exc(x,y);

}
