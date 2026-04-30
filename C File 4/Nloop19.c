#include<stdio.h>
int main()
{
    int i,n,result=1;
    printf("Enter N : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d^3 * ",i);
        result = result *i*i*i;
    }
    printf(" = %d\n",result);
}
