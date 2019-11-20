#include<stdio.h>
#include<stdlib.h>
struct person
{
	int age;
	float weight;
}*p,person1;;
int main()
{
	
	p=&person1;
	printf("Enter the Age: ");
	scanf("%d",&p->age);
	printf("Enter the Weight: ");
	scanf("%f",&p->weight);
	printf("Age =%d",p->age);
	printf("\nWeight =%f",p->weight);
}
