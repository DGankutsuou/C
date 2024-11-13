#include<stdio.h>
#define J 3
#define I 4
int main(){

    /*int notes[5];
    for(int i = 0; i < 5; i++){
        printf("enter the note %d: ", i);
        scanf("%d", &notes[i]);
        printf("\nnote %d = %d\n", i, notes[i]);
    }
    printf("Well done");*/
    int notes[J][I];
    for(int j = 0; j < J; j++){
        for(int i = 0; i < I; i++){
        printf("note[%d][%d]: ", j, i);
        scanf("%d", &notes[j][i]);
        printf("\n");
    }
    printf("\n");
    }
    for(int j = 0; j < J; j++){
        for(int i = 0; i < I; i++){
        printf("enter note[%d][%d] = %d", j, i, notes[j][i]);
        printf("\n");
    }
    }
    printf("Well done");
    
    return 0;
}