#include<unistd.h>
int main(){

    char name[6];
    write(1, "Hello world!\n", 14);
    write(1, "Enter your name:", 17);
    read(0, name, 6);
    write(1, "Welcome ", 9);
    write(1, name, 6);

    return 0;
}