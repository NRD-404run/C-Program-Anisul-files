#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter N : ");
    scanf("%d",&n);
    int val = n;
    int space = 0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(j=1; j<=val; j++)
        {
            printf("%d",j);
        }
        for(j=val-1; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
        val--;
        space++;
    }
}
