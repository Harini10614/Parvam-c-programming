//pointer to funtion
//used for swapping, modifying values inside the function
#include<stdio.h>

void change(int *x) {
    *x = 500;
}

int main () {
    int a=10 ;
    change(&a);;
    printf("a=%d", a); // becomes 100
    return 0;
}