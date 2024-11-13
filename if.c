#include<stdio.h>

int main()
{
    char anime[] = "3- Naruto\n4- One piece\n5- Dragon ball";
    char animeplus18[] = "1- Berserk\n2- elfen lied";

    int age;
    printf("enter your age: ");
    scanf("%d", &age);

    puts(anime);

    if(age >= 18)
    {
        puts(animeplus18);
    }

    return 0;
}