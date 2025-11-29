//stack using array
#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;
void push(int value) {
    if(top == SIZE-1){
        printf("stack overflow!\n");
        return;
    }
    top++;
    stack[top]=value;
}
int pop() {
    if(top == -1) {
        printf("Stack Underflow!\n");
        return-1;
    }
int value=stack[top];
top--;
return value;
}
int peek() {
    if(top ==-1){
        printf("stack is Empty!\n");
        return-1;
    }
    return stack[top];
}

