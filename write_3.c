#include<unistd.h>
int main(){ // display only hello from hello world!

    char hello[14];
    read(0, hello, 14);
    write(1, hello, 6);

    return 0;
}