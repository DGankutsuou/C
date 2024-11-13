#include<stdio.h>
int main(){ /* Problem 3: calculation of the quotent and remainder of the division of two integers A an B
                          without using the division operation. */

    int A,B;
    int Q = 0,R;
    printf("A = ");
    scanf("%d", &A);
    printf("\nB = ");
    scanf("%d", &B);
    while(A >= B){
        R = A - B;
        A = R;
        Q++;
    }
    printf("\nQ = %d\nR = %d", Q, R);
    return 0;
}