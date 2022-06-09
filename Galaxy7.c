#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=k;i++)
    {
        for(j=n;j>=1;j--)
        {
            printf("*");
        }
        printf("
");
        n=n-1;
    }
}