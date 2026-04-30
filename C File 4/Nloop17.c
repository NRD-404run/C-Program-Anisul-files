#include<stdio.h>
int main()
{
    int i,n,result=1;
    printf("Enter any Number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d * ",i);
        result = result * i;
    }
    printf(" = %d\n",result);
}
