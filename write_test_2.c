#include<unistd.h>
#include<stdio.h>
int main(){

    write(1, "Hello world!\n", 14);

    return 0;
}