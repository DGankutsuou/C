#include<stdio.h>

int main()
{

// 1- printf
char name[15];
// int age = 18;
// printf("Hi %s, your age is %d", name, age);
// 2- puts
// puts(name);
// 3- scanf
// int age, price;
// scanf("%[^\n]", name);
// printf("your name is %s", name);
gets(name);
puts(name);
printf("%s", name);

return 0;
}