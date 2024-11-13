#include<stdio.h>

struct person{
    int age;
    float wightl;
    char name[30];
};
int main(){

    struct person var1, var2;
    printf("enter your age: ");
    scanf("%d", &var1);
    printf("\nyour age is %d", var1);
   
    return 0;
}