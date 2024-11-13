#include<unistd.h>
#include<stdio.h>
void print(char a){
    write(1, &a, 6);
}
int main(){

    print('a');
    print(97);

    return 0;
}