#include<stdio.h>
int main()
{
    int i, a[10],limit;
    printf("Enter the limit :");
    scanf("%d", &limit);
    printf("Enter the numbers");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered Number:");
    for(i=0;i<limit;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}