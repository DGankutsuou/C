#include<stdio.h>
int main(){ /* Problem 5: Determination if A divisible by B, 
               with A and B positive integers. */

    int A, B;
    printf("A = ");
    scanf("%d", &A);
    printf("\nB = ");
    scanf("%d", &B);
    if(A % B == 0){
        printf("A is divisible by B");
    } else 
    if(A % B != 0){
        printf("A is not divisible by B");
    }           

    return 0;
}