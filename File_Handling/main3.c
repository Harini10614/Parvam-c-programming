#include<stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("newFile,txt", "w");

    fputs("In C programming has string and array\n", fptr);
    fputs("file handling session in city college", fptr);

    fclose(fptr);
    return 0;
}
