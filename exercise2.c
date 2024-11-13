#include<stdio.h>
int main(){ // Problem 2: Finding the minimum and maximum in a set of n numbers.
    
    int n;
    printf("n = ");
    scanf("%d", &n);
    int notes[n];

    for(int i = 0; i <  5; i++){
        printf("note %d = ", i + 1);
        scanf("%d", &notes[i]);
        printf("\n");
    }
    printf("Allright\n");
    int max = notes[0], min = notes[0];
    for(int j = 1; j < 5; j++){
        
        if(notes[j] > max){
            max = notes[j];
        }
        else if(notes[j] < min){
            min = notes[j];
        }
    }
    printf("max = %d\n", max);
    printf("min = %d", min);

    return 0;
}