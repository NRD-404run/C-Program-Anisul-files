#include<stdio.h>
int main()
{
    int n,i,j,val=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=val; j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
        val++;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=val-2; j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
        val--;

    }

}
