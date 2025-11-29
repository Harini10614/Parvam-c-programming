   //factorial using recursion
   #include<stdio.h>
   int fact(int n) {
    if(n == 0)   //base case
    return 1;

   else
        return n*fact(n-1);  // recursive call
   }
   int main () {
    int n;
    printf("enter number:");
    scanf("%d",&n);

    printf("Factorial=%d",fact(n));
    return 0;
   }