#include<stdio.h>
int main()
{
    float celsius,fahrenheit,temperature;
    printf("enter temperature in celsius:");
    scanf("%f", &celsius);
    fahrenheit = (9.0/5.0)*celsius + 32;
    printf("temperature in fahrenheit = %2f", fahrenheit);
    return 0;
}