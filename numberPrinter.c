#include <unistd.h>

int main(){

    char firstNumber = 48;
    char secondNumber = 49;
    while(firstNumber <= 57){
        while(secondNumber <= 57){
            if(firstNumber < secondNumber){
                write(1, &firstNumber, 1);
                write(1, &secondNumber, 1);
                if(firstNumber <= 55){
                    write(1, ", ", 2);
                }
            }
            secondNumber++;
        }
        secondNumber = 49;
        firstNumber++;
    }

    return 0;
}/*
#include <unistd.h>

int main(void)
{
    int firstConter = 0, secondCounter = 0;
    char firstNumber = 48, secondNumber = 48;

    while (firstConter < 10)
    {
        secondCounter = firstConter + 1;
        while (secondCounter < 10)
        {
            secondNumber = 48 + secondCounter;
            firstNumber = 48 + firstConter;
            write(1, &firstNumber, 1);
            write(1, &secondNumber, 1);
            if (firstConter < 8)
                write(1, ", ", 2);
            secondCounter++;
        }
        firstConter++;
    }
    
    return (0);
}*/