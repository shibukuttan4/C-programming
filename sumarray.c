#include<stdio.h>
int main()
{
    int a[20], limit,i,sum=0;
    printf("Enter the Limit:");
    scanf("%d",&limit);
    printf("Enter the Elements:");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum of the elements in the array is: %d",sum);
    return 0;


}