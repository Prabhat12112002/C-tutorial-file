#include<stdio.h>

int main(){
    int i, sum=0, n=10;
    
    // for(i=0; i<=n; i++){
    //     sum +=i;
    // }
     while(i<=n){
        sum +=i;
        i++;
    }
    printf("The value of sum(1to10) is %d", sum);
    return 0;
}