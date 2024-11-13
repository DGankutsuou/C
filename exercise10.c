#include<stdio.h>
#define N 10
void search(int M[N]);
int main(){ /* Problem 10: write a program tha fills an array with 10 random integers.
               print out the array. then search the array to discover wether or not
               is contains an integer input from the keyboard. */

    int M[N] = {12,3,4,5,8,4,65,23,9,32};
    
    search(M);
    

    return 0;
}
void search(int M[N]){
    int i;
    int j;
    printf("i = ");
    scanf("%d", &i);
    for(j = 0; j < N; j++){
        if(M[j] == i){
            printf("%d is in M[%d]", i, j);
            break;
        }
    }
    if(M[j] != i){
        printf("there is no %d in M", i);
    }
}