#include<stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("newFile,txt", "w");

    fputs("string is a collection of character\n", fptr);
    fputs("method 1 character array method 2 string literal", fptr);

    fclose(fptr);
    return 0;
}