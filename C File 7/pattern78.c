#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter N = ");
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
            printf("%c ",j+64);
        }
        printf("\n");
        val--;
        space++;
    }
}
