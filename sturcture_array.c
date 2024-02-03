/*#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
};
int main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d%s",&s[i].rollno,s[i].name);
	}
	for(i=0;i<5;i++)
	{
		printf("%d %s\n",s[i].rollno,s[i].name);
	}
}*/


#include<stdio.h>
struct DOB

{
	int day;
	int month;
	int year;
};
struct student
{
	int rollno;
	char name[20];
	struct DOB date;
};
int main()
{
	struct student s1;
	scanf("%d%s%d%d%d",&s1.rollno,s1.name,&s1.date.day,&s1.date.month,&s1.date.year);
	printf("%d %s %d %d %d",s1.rollno,s1.name,s1.date.day,s1.date.month,s1.date.year);
}
