#include<stdio.h>
int main()
{
	int n, a=0,b=0,c=0,d=0,e=0,f=0 ;
	printf("\n Enter 1 For Candidate 1");
	printf("\n Enter 2 For Candidate 2");
	printf("\n Enter 3 For Candidate 3");
	printf("\n Enter 4 For Candidate 4");
	printf("\n Enter 5 For Candidate 5");

	printf("\n");printf("\n");
	printf(" Enter Numbers Of Voters: ");
	scanf("%d",&n);
	printf("\n");
	int arr[n];
	printf("\n");
	
	for ( int i=0 ;i <n ; i++)
	{
		printf(" Enter Number To Vote Your Candidates: ");
		scanf("%d",&arr[i]);
	}printf("\n");
	
	for ( int i=0 ; i<n ; i++)
	{
			if ( arr[i]==1) { a=a+1 ;	}
			else if ( arr[i]==2) { b=b+1 ;	}
			else if ( arr[i]==3) { c=c+1 ;	}
			else if ( arr[i]==4) { d=d+1 ;	}
			else if ( arr[i]==5) { e=e+1 ;	}
			else if  ( arr[i]>=6) { f=f+1 ;	}
	}
	printf("\n Total Votes Of Candidate 1: %d ",a);
	printf("\n Total Votes Of Candidate 2: %d ",b);
	printf("\n Total Votes Of Candidate 3: %d ",c);
	printf("\n Total Votes Of Candidate 4: %d ",d);
	printf("\n Total Votes Of Candidate 5: %d ",e);
	printf("\n Total Number Of Spoilt Ballots 6: %d ",f);
	
}
