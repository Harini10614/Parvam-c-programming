#include<stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    char content[500];
    if(fptr != NULL) {
        while(fgets(content, 500, fptr)) {
            printf("%s", content);
        }
           
    }
        else {
            printf("file open unsuccessful");
    }
    return 0;
}