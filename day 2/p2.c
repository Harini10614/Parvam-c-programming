// implicit type casting (automatic)
#include<stdio.h>
int main () {
int a=10;
double b;
b=a;  //int automatically converted to double
printf("a = %d\n", a);
printf("b = %lf\n", b);
return 0;
}

