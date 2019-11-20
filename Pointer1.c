#include<stdio.h>
#include<string.h>
struct cricket
{
	char team1[50];
	char team2[50];
	char place[50];
	int winner;
}
m[4]={ {"ind","aus","pune",1},{"ind","pak","nagpur",1},{"ind","nz","delhi",0},{"ind","sa","kolkata",0}};;
int main()
{	
	int i;
	struct cricket *p=m;
	for(i=0;i<4;i++)
	{
		printf("\nMatch = %d",i+1);
		printf("\n%s vs %s",p->team1,p->team2);
		printf("\nPlace = %s",p->place);
		
	if((p[i].winner)==1)
		{
			printf("\nWinner = %s",p->team1);
		}
		else
		{
			printf("\nWinner = %s",p->team2);
		}
	}
	
}
