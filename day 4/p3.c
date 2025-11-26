//function to calculate simple interest
#include<stdio.h>
    float
    simpleInterest(float p, float r,float t) {
    return (p*r*t) / 100;
    }
int main () {
    float p,r,t;
    printf("enter P,R,T:");
    scanf("%f %f %f", &p, &r, &t);
    printf("simple Interest = %.2f\n", simpleInterest(p,r,t));
    return 0;
}
