#include <stdio.h>

int main(){

    // sum in 1st type:
    int a;
    int b;
    int sum;

    a = 100;
    b = 200;

    sum = a + b;

    printf("Sum is %d. ", sum);

    // sum in 2nd type:
    int c, d, sum2;

    c = 100;
    d = 300;
    sum2 = c + d;
    printf("Sum2 is %d. ", sum2);

    // sum in 3rd type:
    int e = 100, f = 400, sum3;

    sum3 = e + f;
    printf("Sum3 is %d", sum3);


    return 0; 
}