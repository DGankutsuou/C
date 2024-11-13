#include<stdio.h>
#define N 10
void revers(int M[N]);
int main(){ /* Problem 9: Read in 10 integers from the keyboard storing them in an array. 
               then print out the same integers in revers order of input. */ 
    int M[N];
    for(int i = 0; i <= 9; i++){
        printf("\nM[%d] = ", i);
        scanf("%d", &M[i]);
    }
    printf("\n");
    revers(M);
   /* for(int j = 9; j >= 0; j--){
        printf("M[%d] = %d\n", j, M[j]);
    } */

    return 0;
}
void revers(int M[N]){
    for(int j = 9; j >= 0; j--){
        printf("M[%d] = %d\n", j, M[j]);
    }
}