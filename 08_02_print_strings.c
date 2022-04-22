#include<stdio.h>

int main(){
    char str[] = {'P', 'r', 'a', 'b', 'h', 'a', 't', '\0'};
    // char str[] = "Prabhat";
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}