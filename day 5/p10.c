// Structure & Detail of a person  
#include<stdio.h>

struct student{
    char name[30];
    int age;
    float marks;
};
  int main() {
    struct student s;
    printf("enter name:");
    scanf("%s",s.name);

    printf("enter age:");
    scanf("%d", &s.age);

    printf("enter marks:");
    scanf("%f", &s.marks);

    printf("\nstudent Details:\n");
    printf("Name = %s\n",s.name);
    printf("Age = %d\n",s.age);
    printf("Marks = %f\n",s.marks);

    return 0;
  }
