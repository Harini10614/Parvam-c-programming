//FILE HANDLING (TO CHECK THE FILE IS SUCCESSFULLY OPENING OR NOT )
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");
    if(fptr != NULL){
        printf("File open successful");
    }
    else{
        printf("File open unsuccessful");
    }
    return 0;
}