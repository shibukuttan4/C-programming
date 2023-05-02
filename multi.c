#include<stdio.h>
int main()
{
    int n,i,multi=0;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n!=0)
    {
        for(i=1;i<=10;i++)
        {
            multi=n*i;
            printf("%d * %d = %d",i,n,multi);
            printf("\n");
        }
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}