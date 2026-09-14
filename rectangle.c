#include <stdio.h>
int main()
{
    float a,b;
    float area,perimeter;
    printf("enter length and breadth:");
    scanf("%f %f", &length, &breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("area =%.2f", perimeter);
}