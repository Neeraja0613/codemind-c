#include <stdio.h>
typedef struct Stu {
char name[20];
int age;
int marks[5];
int total;
}Student;
int main()
{
Student s1;
printf("Enter student name: ");
scanf("%s", s1.name);
printf("Enter student age: ");
scanf("%d", &s1.age);
printf("Enter student marks in 5 subjects: ");
int i;
for (i = 0; i < 5; i++)
{
scanf("%d", &s1.marks[i]);
}
// calculating total
for (i = 0; i < 5; i++)
{
s1.total += s1.marks[i];
}
printf("Student Details\nName\tAge\tTotal\n---------------------------\n");
printf("%s\t%d\t%d", s1.name, s1.age, s1.total);
}

