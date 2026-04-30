#include<stdio.h>
int main()
{
    while(1){
    int i,fact=1,n;
    printf("Enter any positive number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact =fact*i;
    }
    printf("%d\n",fact);
    }
}
