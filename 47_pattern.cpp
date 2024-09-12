#include<stdio.h>
int main()
{
	for ( char i='A' ; i<='E' ; i++)
	{
		for ( char j='A' ; j<=i ; j++ )
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
