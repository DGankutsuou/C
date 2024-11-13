#include<stdio.h>

int main()
{
    int a = 5, b = 10;
    int userAnswer;
    const int CORRECT_ANSWER = a * b;
    printf("%d * %d = ", a, b);
    scanf("%d", &userAnswer);
    if (CORRECT_ANSWER == userAnswer){
        printf("Correct");
    }
    if(!(CORRECT_ANSWER == userAnswer)){
        printf("Wrong");
    }
    // printf("enter your password: ");
    // scanf("%d", &password);
    // if(password == 18){
    //    printf("correct");
    // }

    return 0;
}