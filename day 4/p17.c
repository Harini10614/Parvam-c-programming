//change the values using pointers
#include<stdio.h>
int main () {
    int a=5;
    int *p=&a;
    *p=10; // modifies value of 'a'
    printf("a=%d", a);
    return 0;
}
