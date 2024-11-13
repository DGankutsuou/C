#include <unistd.h>

int main(){

    char firstNumber = 48;
    char secondNumber = 48;
    char thirdNumber = 48;
    char fourthNumber = 48;
    while(firstNumber <= 57){
        while(secondNumber <= 57){
            while(thirdNumber <= 57){
                while(fourthNumber <= 57){
                    write(1, &firstNumber, 1);
                    write(1, &secondNumber, 1);
                    write(1, " ", 1);
                    write(1, &thirdNumber, 1);
                    write(1, &fourthNumber, 1);
                    write(1, ", ", 2);
                    fourthNumber++;
                }
                fourthNumber = 48;
                thirdNumber++;
            }
            thirdNumber = 48;
            secondNumber++;
        }
        secondNumber = 48;
        firstNumber++;
    }

    return 0;
}