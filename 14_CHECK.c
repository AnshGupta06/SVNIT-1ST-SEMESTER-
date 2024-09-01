#include<stdio.h>
int main()
{
	char ch;
	printf(" Enter a Character : ");
	scanf("%c",&ch);
	
	if( 65<=ch && ch<=90 )
	{	printf("\n '%c' is a Capital Letter ",ch); }
	
	else if( 97<=ch && ch<=122 )
	{	printf("\n '%c' is a Small Case Letter ",ch); }
	
	else if( 48<=ch && ch<=57 )
	{	printf("\n '%c' is  Number ",ch); }
	else if( (0<=ch && ch<=47 ) || (58<=ch && ch<=64) 
	    || ( 91<=ch && ch<=96) || ( 123<=ch && ch<=127) )
	{	printf("\n '%c' is a Special Symbol ",ch); }
	
}
