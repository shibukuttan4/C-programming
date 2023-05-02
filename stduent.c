#include <stdio.h>
int main()
{
    float mark;
    printf("Enter your Mark :");
    scanf("%f",&mark);
    if(mark>=50 & mark <= 100)
    {
        printf("\n Passed!!");
    }
    else if(mark<50 & mark>0)
    {
        printf("\n failed !!");
    }
    else
    {
        printf("\n Invalid Input!!");
    }
    return 0;
}