#include<stdio.h>
int main()
{
    int n,i,j,val=1,count=0;
    printf("Enter N = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=val; j++)
        {
            printf("%d ",++count);
        }
        printf("\n");
        val++;
    }
}
