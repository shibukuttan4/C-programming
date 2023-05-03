#include<stdio.h>
int main()
{
    int a[10][10],m,i,j,n;
    printf("Enter the size of row:");
    scanf("%d",&m);
    printf("Enter the size of column:");
    scanf("%d",&n);
    printf("Enter the Element:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements in multi dimensional\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t %d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}