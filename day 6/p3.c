#include<stdio.h>

struct student{
    char name[20];
    float marks;
};

int main () {
    struct student s[3];
    int maxIndex=0;

    for(int i=0; i<3 ; i++) {
        printf("enter name and marks of student %d:", i+1);
        scanf("%s %f",s[i].name, &s[i].marks);

        if(s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }
    printf("\nToper:%s %2f",s[maxIndex].name,s[maxIndex].marks);
    return 0;
}