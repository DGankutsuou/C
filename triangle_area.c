#include<stdio.h> // triangle area
int main(){

    float a,h;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter h: ");
    scanf("%lf", h);
    float area = a/2 * h;
    printf("Triangle area = %lf", area);
    
    return 0;
}