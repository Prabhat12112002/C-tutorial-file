#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee ankur = {100, 34.23, "Ankur"};

    printf("Code is: %d \n", ankur.code);
    printf("Salary is: %f \n", ankur.salary);
    printf("Name is: %s \n", ankur.name);

    return 0;
}