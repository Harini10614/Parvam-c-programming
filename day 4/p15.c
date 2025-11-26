#include<stdio.h>
int main () {
    int age = 23;
    int *ptr = &age;

    // address 
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);
    return 0;
}