#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter N: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=1; j--)//printing reverse different
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
}
