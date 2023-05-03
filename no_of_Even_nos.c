#include<stdio.h>
int main()
{
    int a[20],i,j,sum=0,limit;
    printf("Enter the Limit");
    scanf("%d",&limit);
    printf("Enter the Elements:");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+1;
        }
    }
    printf("Number of even numbers in the given array is %d",sum);
    return 0;
}