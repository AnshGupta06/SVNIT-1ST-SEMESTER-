
#include<stdio.h>
int main()
{
	float S,D,H,M;
	printf(" Enter Total Seconds : " );
	scanf("%f",&S);
	D = S/86400;  
	H = S/3600;
	M = S/60;
	printf("\n Day= %f",D);
	printf("\n Hour= %f",H);
	printf("\n Minutes= %f",M);

}
