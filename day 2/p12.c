#include<stdio.h>
int main () {
    int marks=95;
    if (marks>=90) {
        printf(" grade A\n");
    }
    else if (marks>=75) {
        printf("grade B\n");
    }
     else if (marks>=50) {
        printf("grade c\n");
     }
    else{
        printf("fail\n");
    }
    return 0;
} 
