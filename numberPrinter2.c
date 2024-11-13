#include <unistd.h>

struct StNumbers{
    char firstNumber; 
    char secondNumber;
};

struct StCounters{
    int firstCounter;
    int secondCounter;
};

void numberValuePuter(char *firstNumber, char *secondNumber, int firstValue, int secondValue){
    *firstNumber = firstValue;
    *secondNumber = secondValue;
}

void counterValuePuter(char *firstCounter, char *secondCounter, int firstValue, int secondValue){
    *firstCounter = firstValue;
    *secondCounter = secondValue;
}

void numberPrinter(char firstNumber, char secondNumber){
    write(1, &firstNumber, 1);
    write(1, &secondNumber, 1);
}

void numberIncreaser(char *firstNumber, char *secondNumber, int firstCounter, int secondCounter){
    *firstNumber = 48 + firstCounter;
    *secondNumber = 48 + secondCounter;
}

void spacePrinter(int firstCounter){
    if (firstCounter < 8){
        write(1, ", ", 2);
    }
}

int main()
{
    struct StNumbers numbers;
    numberValuePuter(&numbers.firstNumber, &numbers.secondNumber, 48, 48);

    struct StCounters counters;
    counterValuePuter(&counters.firstCounter, &counters.secondCounter, 0, 0);

    while (counters.firstCounter < 10)
    {
        counters.secondCounter = counters.firstCounter + 1;
        while (counters.secondCounter < 10)
        {
            numberIncreaser(&numbers.firstNumber, &numbers.secondNumber, counters.firstCounter, counters.secondCounter);
            numberPrinter(numbers.firstNumber, numbers.secondNumber);
            spacePrinter(counters.firstCounter);
            counters.secondCounter++;
        }
        counters.firstCounter++;
    }
    
    return 0;
}