#include<stdio.h>
int main()
{
    float a,b,c,avg;
    printf("Enter three Numbers:");
    scanf("%f %f %f", &a, &b, &c);
    avg=(a+b+c)/3;
    printf("Avg is : %f",avg);
    return 0;
}