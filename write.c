#include<unistd.h>
int main(){

    write(1, "Hello world!\n", 14);
    write(1, "Welcome", 8);

    return 0;
}
