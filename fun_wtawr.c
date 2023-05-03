#include<stdio.h>
int sum();
int main()
{
    int k;
    k=sum();
    printf("The sum is %d",k);
    return 0;
}
int sum()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}