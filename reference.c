#include<stdio.h>
void swap(int*, int*);
int main(){

    int a = 5, b = 10;
    swap(&a, &b);
    printf("a = %d\nb = %d", a, b);

    return 0;
}
void swap(int* p1, int* p2){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}