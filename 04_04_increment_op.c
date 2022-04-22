#include<stdio.h>

int main(){
    int i = 5;
    printf("The value after i++ is %d\n", ++i);
    i++; // ---> Pehle print fir increament
    ++i; //---> Pehle increment fir print kre
    printf("The value after i is %d\n", i);

    i+=10; // --> increment i by 10
    printf("The value after i is %d\n", i);  
    return 0;
}