#include<stdio.h>

int main(){
    int score;
    printf("Enter score(1-100)\n");
    scanf("%d", &score);
    if (score<0 || score>100){
        printf("Invalid score");
    }
    else if (score>=90 && score<=100){
        printf("grade A");
    }
    else if (score>=80)
    {
        printf("grade B");
    }
    else if (score>=70)
    {
        printf("grade C");
    }
    else if (score>=60)
    {
        printf("grade D");
    }
    else 
    {
        printf("grade E");
    }

    
     return 0;
}