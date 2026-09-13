#include<stdio.h>
int main()
{
    int a,b,sum,difference,product;
    float quotient;
    printf("enter two numbers:");
    scanf("%d %d",&a, &b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    printf("sum=%d \n",sum);
    printf("differences=%d \n",difference);
    printf("product=%d \n",product);
    printf("quotient=%.2f",quotient);
    return 0;
}