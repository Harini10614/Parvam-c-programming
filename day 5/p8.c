//Assignment -1
// finding address and value using pointer
#include<stdio.h>
int main() {
    int a=30;
    int *p;
    p = &a;

    printf("a=%d\n",a);
    printf("*a=%d\n",&a);
    return 0;
}
