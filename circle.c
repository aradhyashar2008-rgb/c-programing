#include<stdio.h>
int main()
{
    float area,perimeter,length,breadth;
    printf("enter length and breadth:");
    scanf("%f %f", &length, &breadth);
    area = length * breadth;
    perimeter = 2* (length + breadth);
    printf("area = %2f\n", area);
    printf("perimeter = %2f", perimeter);
    return 0;
}