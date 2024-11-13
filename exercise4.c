#include<stdio.h>
int main(){ /* Problem 4: The calculation of the product of two integers
                        using only the addition operation '+'. */

    int A, B, E = 0;
    printf("A = ");
    scanf("%d", &A);
    printf("\nB = ");
    scanf("%d", &B);
    for(int i = 1; i <= B; i++){
        E += A;
    }
    printf("\nA * B = %d", E);

    return 0;
}