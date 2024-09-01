
#include<stdio.h>
int main()
{
	int HR,MIN,SEC,a,b,c;
	float TOTAL_SECONDS;
	printf("Enter Hour : ");
	scanf("%d",&HR);
	printf("Enter Minute : ");
	scanf("%d",&MIN);
	printf("Enter Seconds : ");
	scanf("%d",&SEC);
	a = HR*3600;
	b = MIN*60;
	c = SEC;
	TOTAL_SECONDS = a+b+c;
	printf("\nTOTAL SECONDS= %f",TOTAL_SECONDS);
}
