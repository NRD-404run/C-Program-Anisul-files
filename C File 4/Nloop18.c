#include<stdio.h>
int main()
{
    int i,n,result=1;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d ^2 * ",i);
        result = result *i*i;
    }
    printf("= %d\n",result);
}
