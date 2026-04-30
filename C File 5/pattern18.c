#include<stdio.h>
int main()
{
     int n,i,j,val=1;
    printf("Enter N = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=val; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        val++;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=val-2; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        val--;
    }
}
