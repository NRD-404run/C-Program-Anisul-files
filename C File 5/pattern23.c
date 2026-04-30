#include<stdio.h>
int main()
{
    int n,i,j,val=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=val; j++)
        {
            printf("%c",i+64);
        }
        printf("\n");
        val++;
    }
    for(i=n-1; i>=1; i--)
    {
        for(j=1; j<=val-2; j++)
        {
            printf("%c",i+64);
        }
        printf("\n");
        val--;

    }

}
