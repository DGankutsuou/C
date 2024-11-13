#include<stdio.h>
int main(){ // Problem 7: determine all divisors of a given integer X.

    int X;
    printf("X = ");
    scanf("%d", &X);
    for(int i = 1; i <= (X/2); i++){
        if(X % i == 0){
            printf("%d\n", i);
        }
    }
    printf("%d", X);

    return 0;
}