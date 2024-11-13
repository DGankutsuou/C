#include<unistd.h>
int main(){ // display only hello from hello world!

    char hello[6], hello1[8];
    int n, m;
    n = read(0, hello, 6);
    m = read(0, hello1, 8);
    write(1, hello, n);

    return 0;
}