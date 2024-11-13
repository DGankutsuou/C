#include<stdio.h>
int main(){ // Problem 1: calculation of the sum of the first n integers.

    // method 1:
   /* int n, total = 0;
    printf("n = ");
    scanf("%d", &n);
    for(int i = 1; i < n; i++){
        total += i;
    }
    printf("total = %d", total); */

    // method 2:
    int n, total;
    printf("n = ");
    scanf("%d", &n);
    // total = n * (n - 1) / 2;
    printf("%d", n * (n - 1) / 2);

    return 0;
}