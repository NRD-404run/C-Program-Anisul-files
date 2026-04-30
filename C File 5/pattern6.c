#include<stdio.h>
int main()
{
    int n,i,j,val=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=val; j++)
        {
            printf("%c",i+64); // small letter for printing i+96
        }
        printf("\n");
        val++;
    }
}
