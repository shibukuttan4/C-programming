#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two number: ");
    scanf("%d %d", &a , &b);
    printf("\nBefore swaping:");
    printf("\na = %d",a);
     printf("\nb = %d",b);
     temp=a;
     a=b;
     b=temp;
     printf("\nAfter swaping:");
     printf("\na = %d",a);
     printf("\nb = %d",b);
     return 0;
}