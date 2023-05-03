#include<stdio.h>
int main()
{
    int a[20],i,limit,flag=0,item;
    printf("Enter the limit:");
    scanf("%d",&limit);
    printf("Enter the Elements:");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Item to be searched:");
    scanf("%d",&item);
    for(i=0;i<limit;i++)
    {
        if(a[i]==item)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("The Element is in the array of position %d",i+1);
    }
    else
    {
        printf("THe Element is not in the array!!!");
    }
    return 0;
}