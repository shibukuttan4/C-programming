#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d %d", &a ,&b);
    printf("Before Swapping !!");
    printf("\n a= %d",a);
    printf("\n b= %d",b);
    printf("\n After Swapping !!");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n a= %d",a);
    printf("\n b= %d",b);
    return 0;

}