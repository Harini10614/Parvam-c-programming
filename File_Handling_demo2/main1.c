#include<stdio.h>
int main () {
    FILE * fptr;
    fptr = fopen("tesr.txt","r");

    if (fptr != NULL) {
        printf("file open successful");
    }
    else {
        printf("file open unsuccessful");
    }
    return 0;
}