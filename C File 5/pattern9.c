#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int val=n;
    for(i=1; i<=n; i++) //printing for lines
    {
        for(j=1; j<=val; j++) //printing for values
        {
            printf("%d",j);
        }
        printf("\n");
        val--;
    }
}
