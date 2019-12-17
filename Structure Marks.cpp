#include<stdio.h>
#include<string.h>
struct marks
{
	int p;
	int q;
	int r;
	int t;
	float u;
}m[5];
int main()
{
	int i;
//	typedef struct marks marks;
//	marks m[5];
	printf("Enter the marks of the students:\n");
	for(i=0;i<5;i++)
	{
		printf("No. %d.\n",i+1);
		printf("Enter the marks of the 1st subject:\n");
		scanf("%d",&m[i].p);
		printf("Enter the marks of the 2nd subject:\n");
		scanf("%d",&m[i].q);
		printf("Enter the marks of the 3rd subject:\n");
		scanf("%d",&m[i].r);
		m[i].t=(m[i].p+m[i].q+m[i].r);
		m[i].u=(m[i].t)*100/300;
	}
	printf("The details of the students are:\n");
	for(i=0;i<5;i++)
	{
		printf("No. %d.\n",i+1);
		printf("The total marks of the subjects:\n");
		printf("%d",m[i].t);
		printf("The Percentage of the subjects:\n");
		printf("%f",m[i].u);
	}
}
