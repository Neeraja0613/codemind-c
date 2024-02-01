#include<stdio.h>
union student
{
	int rollno;
	char name[20];
};
int main()
{
	union student s1;
	scanf("%d%s",&s1.rollno,s1.name);
	printf("%d%s",s1.rollno,s1.name);
}
