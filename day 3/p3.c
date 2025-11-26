#include<stdio.h>
int main () {
    int n, fact =1; // initilizing the data type.
    printf("enter numbers:"); // print fuction for user .
    scanf("%d", &n); // taking user input.
    for (int i=1; i<=n; i++) { // startpoint from 1 and number should be less than or equal to n.
    fact *=i; // logic for fact of number.
    }
    printf("factorial = %d", fact); // print statement after finding the logic.
    return 0;
}
