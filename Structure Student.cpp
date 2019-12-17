#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int roll;
	char dept[10];
};
int main()
{
	int i;
	typedef struct student stu;
	stu s[5];
	printf("Enter the details of the students:\n");
	for(i=0;i<5;i++)
	{
		printf("No. %d.\n",i+1);
		printf("Enter the name of the Student\n");
		gets(s[i].name);
		printf("Enter the roll no of the Student\n");
		scanf("%d",&s[i].roll);
		printf("Enter the dept of the Student\n");
		gets(s[i].dept);
		gets(s[i].dept);
	}
	printf("The details of the students are:\n");
	for(i=0;i<5;i++)
	{
		printf("No. %d.\n",i+1);
		printf("The name of the Student\n");
		puts(s[i].name);
		printf("The roll no of the Student\n");
		printf("%d",s[i].roll);
		printf("The dept of the Student\n");
		puts(s[i].dept);
	}
}
