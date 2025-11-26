// To find the marks and balance
#include<stdio.h>
int main () {
    int marks = 80; 
    int *ptr = &marks;
    float balance = 100;
    float *qtr = &balance;

    printf("%u\n", marks);
    printf("%u\n", *ptr);
    printf("%u\n", (&marks));
    printf("%u\n", balance);
    printf("%u\n", *qtr);
    printf("%u\n", (&balance));
    return 0;
}
