//assignment -2
// changing value using pointer
#include<stdio.h>

void change(int *x) {
    *x = 400;
}

int main () {
    int a=20 ;
    change(&a);;
    printf("a=%d", a); // becomes 400
    return 0;
}