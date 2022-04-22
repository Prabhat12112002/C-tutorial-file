#include<stdio.h>
void display(); // function prototype

int main(){
    int a;
    printf("Initializing display Function\n");
    display(); // Function Call 
    printf("Display functoin finished its work\n");
    return 0;
}

// Function definition
void display(){
    printf("This is display\n");
} 