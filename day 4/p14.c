// pointer 
// age of a person 
#include<stdio.h>
int main () {
    int age = 25;
    int *ptr = &age;

    // address 
    printf("%p\n", &age);
    printf("%u\n", &age);
    return 0;
}