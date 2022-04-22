#include<stdio.h>

int main()
{
    int a, b, add, negative;
    float c, d, sum, substance;
    scanf("%d%d", &a,&b);
    printf("");
	
    add = a+b;
    negative = a-b;
    printf("%d  %d", add, negative);
    
    scanf("%f%f", &c, &d);
    printf("");


    sum = c+d;
    substance = c-d;

    printf(" %f  %f ", sum, substance);
    return 0;
}
