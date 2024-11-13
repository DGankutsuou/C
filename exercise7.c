#include<stdio.h>
int main(){ // Problem 7: determine if an integer X is prime or not.

    int X;
    int s = 0;
    printf("X = ");
    scanf("%d", &X);
    for(int i = 1; i <= X/2; i++){
        if(X % i == 0){
            s++;
        }
    }
    if(s == 1){
        printf("%d is a prime number", X);
    }else if(s > 1){
        printf("%d is not a prime number", X);
    }

    return 0;
}
