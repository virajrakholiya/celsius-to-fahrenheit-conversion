#include<stdio.h>

int main(){
    float a;
    int b = 9;
    int c = 5;
    int d = 32;

    printf("Enter Celsius:");
    scanf("%f", &a);

    printf("\nThis is Fahrenheit Value: %f", a * b / c + d);

    return 0;
}