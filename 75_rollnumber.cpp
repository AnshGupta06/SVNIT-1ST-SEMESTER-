#include<stdio.h>
int main()
{
	int sub1[4] , sub2[4] , sub3[4] , roll[4] , e[3];
	
	for ( int i=0 ; i<4 ; i++) 
	{	printf(" Enter Marks of Subject 1 Of Roll No.%d: ",i+1);
		scanf("%d",&sub1[i]) ;}	
	printf("\n");		
	for ( int i=0 ; i<4 ; i++) 
	{	printf(" Enter Marks of Subject 2 Of Roll No.%d: ",i+1);
		scanf("%d",&sub2[i]) ;}
	printf("\n");
	for ( int i=0 ; i<4 ; i++) 
	{	printf(" Enter Marks of Subject 3 Of Roll No.%d: ",i+1);
		scanf("%d",&sub3[i]) ;}
	printf("\n");
	for ( int i=0 ; i<4 ; i++) 
	{	
	printf("\n Marks Of Roll %d = %d %d %d ",i+1,sub1[i],sub2[i],sub3[i]);
	}
	printf("\n");
		for ( int i=0 ; i<4 ; i++) 
	{	
	printf("\n Total Marks Of Roll %d = %d ",i+1,sub1[i]+sub2[i]+sub3[i]);
	}
	int max1=sub1[0],a=0,max2=sub2[0],b=0,max3=sub3[0],c=0;
	
		for ( int i=0 ; i<3 ; i++) //highest marks in each subject
	{
		
		if( sub1[i+1]>sub1[i] ) { max1 =sub1[i+1] ; a=i+1  ; }
		if( sub2[i+1]>sub2[i] ) { max2 =sub2[i+1] ; b=i+1  ; }
		if( sub3[i+1]>sub3[i] ) { max3 =sub3[i+1] ; c=i+1  ; }
	}
	printf("\n");
	printf("\n Higest Marks Of Subject %d = %d ( Roll No.%d )",1,max1,a+1) ;
	printf("\n Higest Marks Of Subject %d = %d ( Roll No.%d )",2,max2,b+1) ;
	printf("\n Higest Marks Of Subject %d = %d ( Roll No.%d )",3,max3,c+1) ;
	
	int hig [4];
	for( int i=0 ; i<4 ; i++)
	{
		hig [ i+1] = sub1[i]+sub2[i] + sub3[i] ;
	}
	int max4= hig[0] ,d=0 ;
	for ( int i=0 ; i<4 ; i++) //highest marks of roll number
	{
		
		if( hig [i+1]> hig [i] ) { max4 =sub1[i+1] ; d=i+1  ; }
	}
	printf("\n");
	printf("\n Higest Marks Of Roll No.%d ",d) ;
}
