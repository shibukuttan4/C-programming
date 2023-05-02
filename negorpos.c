#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number:");
    scanf("%d", &a);
    if(a<0)
    {
        printf(" This is a negative number!!");
    }
    else
    {
        printf("This is Postive Number!!");
    }
    return 0;
}