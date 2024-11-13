#include<unistd.h>
#include<stdio.h>
int main(){

    int a, b;
    char name[6];
    a = write(1, "Hello world!\n", 14);
    write(1, "Enter your name:", 17);
    b = read(0, name, 6);
    write(1, "Welcome ", 9);
    write(1, name, 6);
    write(1, "\n", 2);
    printf("%d\n%d", a, b);

    return 0;
}