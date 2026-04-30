#include<stdio.h>
int main()
{
    int n,i,j,val=1;
    printf("Enter N = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)//printing for line
    {
        for(j=1; j<=val; j++)//printing for number
        {
            printf("%d",j);
        }
        printf("\n");
        val++;
    }
}
