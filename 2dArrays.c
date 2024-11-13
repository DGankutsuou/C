#include<stdio.h>
int main(){

    int notes[3][4]={
        {13,1,5,8},
        {4,54,6,100},
        [2] = {5, 7, 8, 9}
    };
    printf("%d", notes[2][2]);

    return 0;
}