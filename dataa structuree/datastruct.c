#include<stdio.h>
struct empl
{
	char name[50];
	int age;
	int no;
	float salary;
}S1,S2,S3;
void main()
{
	printf("enter employee details:");
    scanf("%s",S1.name);
    scanf("%d",&S1.age);
    scanf("%d",&S1.no);
    scanf("%s",&S1.salary);
    scanf("%s",S2.name);
    scanf("%d",&S2.age);
    scanf("%d",&S2.no);
    scanf("%s",&S2.salary);
    scanf("%s",S3.name);
    scanf("%d",&S3.age);
    scanf("%d",&S3.no);
    scanf("%s",&S3.salary);
    printf("employee data");
    printf("%s",S1.name);
    printf("%d",S1.age);
    printf("%d",S1.no);
    printf("%s",S1.salary);
     printf("%s",S2.name);
    printf("%d",S2.age);
    printf("%d",S2.no);
    printf("%s",S2.salary);
     printf("%s",S3.name);
    printf("%d",S3.age);
    printf("%d",S3.no);
    printf("%s",S3.salary);
}
