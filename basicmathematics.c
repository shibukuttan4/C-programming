#include <stdio.h>
int main()
{
    int a, b,c;
    float sum,sub,div,multi;
    printf("Enter two number:");
    scanf("%d %d", &a,&b);
    printf("\n Enter 1 for Addition \n Enter 2 for subtraction \n Enter 3 for multiplication \n Enter 4 for Division:\t");
    scanf("%d",&c);
    if(c==1)
    {
        sum = a+b;
        printf(" \nThe sum of the numbers %d and %d is:%f",a,b,sum);
    }
    else if(c==2)
    {
        sub= a-b;
        printf(" \nThe subtraction of the numbers %d and %d is:%f",a,b,sub);
    }
    else if(c==3)
    {
        multi= a*b;
        printf(" \nThe multiplication of the numbers %d and %d is:%f",a,b,multi);
    }
    else if(c==4)
    {
        div= a/b;
        printf(" \nThe division of the numbers %d and %d is:%f",a,b,div);
    }
    else
    {
        printf("\n You are a fool!!!");
    }
    return 0;

}