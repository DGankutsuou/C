#include<stdio.h>
int main(){

    int var = 5;
    int* ptr = &var;
    printf("%d", *ptr);

    return 0;
}