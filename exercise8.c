#include<stdio.h>
int main(){ // Problem 8: determine the sum of the digits that make up a natural number.

    int X;
    int sum;
    printf("X = ");
    scanf("%d", &X);
    for(sum = 0; X != 0;){
        sum = sum + X%10;
        X = X/10;
    }
    printf("sum = %d", sum);

    return 0;
}