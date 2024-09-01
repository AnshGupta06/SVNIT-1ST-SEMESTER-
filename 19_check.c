#include<stdio.h>
int main()
{
	char ch,ans;
	printf(" Enter a Character : ");
	scanf("%c",&ch);
	
	ans = (ch >= 'a' && ch <= 'z') ? 'Y' : 'N';
	printf("\n Smallcase Letter Present = %c",ans);
}


