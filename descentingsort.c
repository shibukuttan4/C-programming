#include<stdio.h>
int main()
{
    int a[20],i,j,limit,temp;
    printf("Enter the limit:");
    scanf("%d",&limit);
    printf("Enter the Elements:");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before sort:");
    for(i=0;i<limit;i++)
    {
        printf("\n %d",a[i]);
    }
    for(i=0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n After Sort:");
    for (i=0;i<limit;i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}