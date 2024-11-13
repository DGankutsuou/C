#include<stdio.h>
int main(){

    // int notes[5] = {10, 5, 15, 20, 7};
    
    int notes[5] = {12, 4, 9, -12, [4] = 99};
     for(int i = 0; i < 5; i++){
         notes[i]++;
     }

    for(int i = 1; i <= 5; i++){
        printf("note %d = %d\n", i, notes[i-1]);
    }


    return 0;
}
