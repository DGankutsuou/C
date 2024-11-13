#include<stdio.h>
void inc(int);
int main(){

    int a = 5;
     inc(a);
     printf("main %d", a);

    return 0;
}
void inc(int a){
    a++;
    printf("inc %d\n", a);
}