#include<stdio.h>
int main () {
    int a[5];
    printf("enter 5 numbers:");
    for (int i=0; i<5; i++)
        scanf("%d", &a[i]);
    printf("your entered:");
    for (int i=0; i<5; i++)
        printf("%d ", a[i]);
    return 0;
}
        
