#include <stdio.h>
int main()
{
    float total;
    printf("Enter Your Mark :");
    scanf("%f", &total);
    if(total<=100 && total>=90)
    {
        printf("\n You have Secured A Grade");
    }
    else if(total<90 && total>=80)
    {
        printf("\n You have Secured B Grade");
    }
    else if(total<80 && total>=70)
    {
        printf("\n You have Secured C Grade");
    }
    else if(total<70 && total>=60)
    {
        printf("\n You have Secured D Grade");
    }
    else if(total<60 && total>=50)
    {
        printf("\n You have Secured E Grade");
    }
    else if(total<50 && total>=0)
    {
        printf("\n You have Failed in the Exam");
    }
    else
    {
        printf("\n Invalid Input!!");
    }
    return 0;
}