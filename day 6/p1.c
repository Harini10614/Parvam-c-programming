//nested structure
#include<stdio.h>

struct Date
{
    int d, m, y;
};
struct student
{
    char name[20];
    struct Date dob;
};
int main () {
    struct student s;

    printf("enter a name:");
    scanf("%s", s.name);

    printf("enter DOB (dd mm yyyy):");
    scanf("%d %d %d", &s.dob.d, &s.dob.m, &s.dob.y);

    printf("\nDetails:\n");
    printf("Name:%s\nDOB: %d-%d-%d", s.name, s.dob.d, s.dob.m, s.dob.y);

    return 0;
}