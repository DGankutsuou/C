#include<stdio.h>
int main(){

    int n;
    int s = 0;
    printf("n: ");
    scanf("%d", &n);
    int a = 0;
    while(a <= n){
        s += a;
        a++;
        /* 
        s = 0 + 0 = 0
        s = 0 + 1 = 1
        s = 1 + 2 = 3
        s = 3 + 3 = 6
        ...
        */
        printf("s = %d\n", s);
    }
    // printf("%d\n", n);

    return 0;
}