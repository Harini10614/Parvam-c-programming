#include <stdio.h> 
 int main () {
        int a, b, c;
         //taking input from user
        printf( "enter three number: ");
        scanf("%d %d %d", &a, &b, &c);
        // checking which number is largest
        if (a >=b && a >=c) {
            printf("largest = %d", a);
        }
        else if (b >= a && b >=c) {
            printf("Largest = %d", b);
        }
        return 0;
    }

    

        
        
    
