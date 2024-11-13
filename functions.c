#include<stdio.h>
void sayHello(int, int);
int add(int, int);
int main(){

    // printf("Hello");
    int a = 5, b = 10;
    int addadd = add(a, b);
    printf("%d\n", add(a, b));
    printf("%d", addadd);

    return 0;
}
/* 
void sayHello(int p1, int p2){
    int result;
    result = p1 + p2;
    printf("%d + %d = %d\n", p1, p2, result);

}
*/
int add(int pa1, int pa2){
    int res;
    res = pa1 + pa2;
    return res;
}
