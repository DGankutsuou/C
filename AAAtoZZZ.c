#include <unistd.h>

int main(){
    
    for(char firstLetter = 65; firstLetter <= 90; firstLetter++){
        for(char secondLetter = 65; secondLetter <= 90; secondLetter++){
            for(char lastLetter = 65; lastLetter <= 90; lastLetter++){
                write(1, &firstLetter, 1);
                write(1, &secondLetter, 1);
                write(1, &lastLetter, 1);
                write(1, "\n", 2);
            }
        }
    }
    
    return 0;
}