#include<stdio.h>
void sum();
int main()
{
    sum();
    return 0;
}
void sum()
{
    int a,b,c;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
}