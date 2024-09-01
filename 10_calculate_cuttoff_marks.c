int main()
{
	int m,p,c,e;
	float cm;
	printf("Enter Mathematics : ");
	scanf("%d",&m);
	printf("Enter Physics : ");
	scanf("%d",&p);
	printf("Enter Chemistry : ");
	scanf("%d",&c);
	printf("Enter English : ");
	scanf("%d",&e);
	cm = (m+p+c)/2+e;
	printf("\nCUT OFF MARK = %f",cm);
}
