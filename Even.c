#include <stdio.h>
int main()
{
    int i,a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        if(a%2==0)
            {
                printf("\n %d",a);
            }
            a--;

    }
    return 0;
    

}