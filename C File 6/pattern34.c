#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter N = ");
    scanf("%d",&n);
    int val=n;
    int space = 0;
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(j=1; j<=val; j++)
        {
            printf("%d",i);
        }
        printf("\n");
        val--;
        space++;
    }
}
