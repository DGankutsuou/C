#include<unistd.h>
int main(){ // display only world! from hello world!

    char hello[6], hello1[8];
    int n, m;
    n = read(0, hello, 6);
    m = read(0, hello1, 8);
    write(1, hello1, m);

    return 0;
}