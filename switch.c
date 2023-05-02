#include<stdio.h>
int main()
{
    int ch;
    printf(" 1 for poratta \n 2 for biriyani \n 3 for fried rice \n 4 for Mandhi \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("You have selected poratta!!");
            break;
        case 2:
            printf("You have selected Biriyani !!");
            break;
        case 3:
            printf("You have selected Fried rice !!");
            break;
        case 4:
            printf("You have selected Mandhi !!");
            break;
        default :
            printf("You are a fool !!");
    }
    return 0;
}