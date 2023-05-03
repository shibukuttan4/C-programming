#include<stdio.h>
int main()
{
    int a[20],b[20],c[20],i,limit;
    printf("Enter the limit:");
    scanf("%d",&limit);
    printf("Enter the values of the  first array:");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the values of Second array:");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<limit;i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    printf("The Elements of first Array:");
    for(i=0;i<limit;i++)
    {
        printf("\n %d",a[i]);       
    }
    printf("\n The Elements of second Array:");
    for(i=0;i<limit;i++)
    {
        printf("\n %d",b[i]);
    }
    return 0;
}