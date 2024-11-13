#include<stdio.h>
#define N 10
void pronic(int M[N]);
int main(){ // Pronic number [(n = k * (k + 1)]

    int M[N];
    pronic(M);
    
    return 0;
}
void pronic(int M[N]){
    int k = 0;
    int r;
    int s = 0;
    for(int i = 0; i < N; i++){
        printf("M[%d] = ", i);
        scanf("%d", &M[i]);
    }
    int j;
    for(j = 0; j < N; j++){
        k = 0;
        r = 2;
        s = 0;
        while(M[j] > s){
            s += r;
            r += 2;
        k++;
    }
    if(M[j] == k * (k + 1)){
        printf("%d is a pronic number\n", M[j]);
    }else{
        printf("%d is not a pronic number\n", M[j]);
    }
    printf("%d  %d  %d\n", M[j], k, r);
    }
}