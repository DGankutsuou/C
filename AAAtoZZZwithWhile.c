#include <unistd.h>

int main(){

    char firstLetter = 65, secondLetter = 65, lastLetter = 65;
    
    while(firstLetter <= 90){
        while(secondLetter <= 90){
            while(lastLetter <= 90){
                write(1, &firstLetter, 1);
                write(1, &secondLetter, 1);
                write(1, &lastLetter, 1);
                write(1, "\n", 2);
                lastLetter++;
            }
            secondLetter++;
        }
        lastLetter = 65;
        firstLetter++;
    }
    
    return 0;
}