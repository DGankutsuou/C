#include<stdio.h>
#define N 8
void give(int M[N]);
int main(){

    int M[N] = {1,2,4,9,10,20,50,100};
    give(M);

    return 0;
}
void give(int M[N]){
    int w;
    int j;
    printf("Enter your wiyhdrawl amount: ");
    scanf("%d", &w);
    for(j = N - 1; j >= 0;){
        if(w >= M[j]){
            printf("%d$\n", M[j]);
            w -= M[j];
        }else if(w < M[j]){
            j--;
        }
        
    }
}